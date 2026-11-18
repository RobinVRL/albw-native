#include "ghidra_types.h"

extern int func_00410690(undefined4 *param_1,int *param_2);
extern int func_00413394(int *param_1,int *param_2,int param_3);
extern int func_0041365C(int *param_1,int *param_2);
extern int func_00414FF0(void);
extern int func_00415644(int param_1,int param_2);
extern int func_00416EF8(int param_1,int param_2,int param_3);
extern int func_00417690(int param_1);
extern int func_0041B8B4(int param_1);
extern int func_0041C81C(void);
extern int func_0041C870(int *param_1,int param_2);

// USA 0041C320 <- EU 0041C300 (Ghidra, non-matching)

undefined4 func_0041C320(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  if ((char)param_1[3] != '\0') {
    func_0041B8B4((int)param_1);
  }
  iVar3 = param_1[0x24];
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0041c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0xc))(param_1);
  }
  func_0041365C(&iStack_20,(int *)*param_2);
  func_00416EF8(iVar3,local_1c,param_2[10]);
  func_00417690(iVar3);
  uVar4 = 0;
  do {
    func_00410690(param_1 + uVar4 * 3 + 0x4d,(int *)param_2[uVar4 + 1]);
    func_00413394(param_1 + uVar4 * 4 + 0x3d,(int *)param_2[uVar4 + 5],
                  (int)*(char *)((int)param_2 + uVar4 + 0x24));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  *(undefined1 *)(param_1 + 0x59) = 3;
  *(undefined1 *)(param_1 + 3) = 1;
  piVar1 = func_0041C81C();
  func_0041C870(piVar1,(int)(param_1 + 0x11));
  puVar2 = func_00414FF0();
  func_00415644((int)puVar2,(int)(param_1 + 0x14));
  *(undefined1 *)((int)param_1 + 0x166) = 1;
  return 0;
}

