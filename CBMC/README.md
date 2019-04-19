### [CBMC Bounded Model Checking for Software](http://www.cprover.org/cbmc/)

#### These examples are deprecated. Please see here: https://github.com/diffblue/cbmc/tree/develop/doc/cprover-manual

- [Example: Buffer Overflows](./0.c)<br>
- [First Steps](./1.c) | `cbmc 0.c --show-properties --bounds-check --pointer-check`<br>
- [Verifying Modules](./2.c) | `cbmc 2.c --function sum --bounds-check`<br>
- [Loop Unwinding](./3.c) | `cbmc 3.c --function binsearch --unwind 6 --bounds-check --unwinding-assertions`<br>
- [Unbounded Loops](./4.c)