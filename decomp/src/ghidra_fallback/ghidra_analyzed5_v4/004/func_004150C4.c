#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_00412BB4(void);
extern int func_00412D48(int *param_1);
extern int func_00412F58(void);
extern int func_004137E4(void);
extern int func_00417E24(void);
extern int func_00417E80(int param_1);
extern int func_00418648(int param_1);
extern int func_00419924(void);
extern int func_004199E8(int param_1,float fparam_0);
extern int DAT_00415204;

// USA 004150C4 <- EU 004150A4 (Ghidra, non-matching)
// GLOBAL DAT_00415204 int

undefined4 func_004150C4(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  float in_s0;
  
  func_0010C0C0((int *)(param_1 + 0x1c4));
  piVar1 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar4 = (int *)*piVar1;
      (**(code **)(piVar1[-1] + 8))(piVar1 + -1);
      piVar1 = piVar4;
    } while (piVar4 != (int *)(param_1 + 0x1d4));
  }
  piVar1 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar4 = (int *)*piVar1;
      (**(code **)(piVar1[-1] + 0xc))(piVar1 + -1);
      piVar1 = piVar4;
    } while (piVar4 != (int *)(param_1 + 0x1e0));
  }
  func_00418648(DAT_00415204);
  piVar1 = (int *)func_00412BB4();
  func_00412D48(piVar1);
  piVar1 = (int *)func_00412F58();
  func_00412D48(piVar1);
  piVar1 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar4 = (int *)*piVar1;
      (**(code **)(piVar1[-1] + 8))(piVar1 + -1);
      piVar1 = piVar4;
    } while (piVar4 != (int *)(param_1 + 0x1e0));
  }
  puVar2 = func_00417E24();
  func_00417E80((int)puVar2);
  func_004137E4();
  puVar3 = func_00419924();
  func_004199E8((int)puVar3,in_s0);
  piVar1 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar4 = (int *)*piVar1;
      (**(code **)(piVar1[-1] + 0xc))(piVar1 + -1);
      piVar1 = piVar4;
    } while (piVar4 != (int *)(param_1 + 0x1d4));
  }
  return func_0010C160((int *)(param_1 + 0x1c4));
}

