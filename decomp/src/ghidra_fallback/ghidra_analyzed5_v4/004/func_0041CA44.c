#include "ghidra_types.h"

extern int func_00417E24(void);
extern int func_00417F50(undefined4 *param_1,undefined4 *param_2);
extern int func_00417F8C(int *param_1);
extern int func_004197B8(int param_1,int param_2,uint param_3,int param_4,uint param_5);
extern int func_00419924(void);
extern int func_0041D3F8(int param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_0041caa8;

// USA 0041CA44 <- EU 0041CA24 (Ghidra, non-matching)
// GLOBAL DAT_0041caa8 int

undefined4 * func_0041CA44(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = func_00417E24();
  puVar2 = (undefined4 *)func_00417F8C(piVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined1 *)((int)puVar2 + 0x132) = 1;
    puVar3 = func_00419924();
    piVar1 = func_004197B8((int)puVar3,param_1,param_2,DAT_0041caa8,(uint)puVar2);
    if (piVar1 == (int *)0x0) {
      puVar4 = func_00417E24();
      func_00417F50(puVar4,puVar2);
      return (undefined4 *)0x0;
    }
    puVar2[0x68] = piVar1;
    func_0041D3F8((int)puVar2,param_3,param_4);
  }
  return puVar2;
}

