# RZIL Hexagon Representation

The Hexagon architecture has some challenges when it comes to representing it in RZIL.
Because multiple instructions are executed in parallel we need to emulated this behavior.

An instruction packet in Hexagon is executed in this order.

1. Read register content for each instruction. (R)
2. Execute instructions. (X)
3. Write results to memory/registers. (W)
4. Branch (B)

To emulate this behavior we let the VM only execute the effects of the complete packet.
The plugins task is to guaranty, that the packets effects are executed in the correct order.
In a way that they produce the exact same results as on the hardware.

For this the plugin separates the X, W and B part of each instruction into a single function.
Orders them them correctly and gives gives it the VM for execution.

Note that the R step is not an effect in RZIL and therefor needs no VM execution.
The X functions can simply read the register values.

>  Example
>  
>  Instruction packet:
>  {
>    insn0
>    insn1
>    insn2
>  }
>  
>  Plugin orders the effects:
>
>  effects = [
>  insn0_exec_effects
>  insn1_exec_effects
>  insn2_exec_effects
>
>  insn0_write_effects
>  insn1_write_effects
>  insn2_write_effects
>
>  branch_effect
>  ]
>
>  vm_run(effects)

Lets take a look at another example with .new and memw(Rd) memb(Rd)
