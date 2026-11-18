#include "ghidra_types.h"

extern int func_0048B130(undefined4 *param_1,int param_2);
extern int func_004927C8(undefined4 *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00494F50(int param_1,undefined4 param_2);
extern int func_00495028(int param_1,undefined4 *param_2);
extern int func_004952C0(int param_1,undefined4 param_2);
extern int func_00580CDC(undefined4 param_1,int param_2);
extern int *DAT_0014a690;
extern float DAT_0014a694;
extern float DAT_0014a698;
extern undefined4 *DAT_0014a69c;
extern undefined4 *DAT_0014a6a0;

// USA 0014A5D4 <- EU 0014A5D4 (Ghidra, non-matching)
// GLOBAL DAT_0014a690 int *
// GLOBAL DAT_0014a694 float
// GLOBAL DAT_0014a698 float
// GLOBAL DAT_0014a69c undefined4 *
// GLOBAL DAT_0014a6a0 undefined4 *

undefined1 * func_0014A5D4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define auStack_118 ((undefined4 *)(albw_frame + 0x8))
  #define auStack_68 ((undefined4 *)(albw_frame + 0xb8))
  iVar3 = *DAT_0014a690;
  func_00580CDC(iVar3,param_2);
  func_004927C8(auStack_118,param_2,DAT_0014a698,DAT_0014a694);
  func_00494F50(iVar3,auStack_118);
  func_0048B130(auStack_68,(int)auStack_118);
  func_004952C0(iVar3,auStack_68);
  func_00495028(iVar3,DAT_0014a69c);
  puVar1 = DAT_0014a6a0;
  piVar2 = (int *)*DAT_0014a6a0;
  (**(code **)(*piVar2 + 0x14))(piVar2,0);
  (**(code **)(*piVar2 + 0x18))(piVar2,1);
  (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1,1);
  return (undefined1 *)auStack_118;
}

