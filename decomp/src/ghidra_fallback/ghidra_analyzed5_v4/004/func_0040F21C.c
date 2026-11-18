#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_0040F394(int param_1,int param_2,int param_3);

// USA 0040F21C <- EU 0040F1FC (Ghidra, non-matching)

undefined4 func_0040F21C(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  do {
    piVar2 = (int *)(param_1 + 0x2c);
    func_0010C0C0(piVar2);
    piVar1 = func_0040F394(param_1,2,1);
    if ((piVar1 == (int *)0x0) && (piVar1 = func_0040F394(param_1,1,1), piVar1 == (int *)0x0)) {
      piVar1 = func_0040F394(param_1,0,1);
      if (piVar1 == (int *)0x0) {
        return func_0010C160(piVar2);
      }
      func_0010C160(piVar2);
    }
    else {
      func_0010C160(piVar2);
    }
    *(int **)(param_1 + 0x24) = piVar1;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined1 *)(piVar1 + 5) = 3;
    func_001080D4(piVar1 + 3);
    *(undefined4 *)(param_1 + 0x24) = 0;
  } while( true );
}

