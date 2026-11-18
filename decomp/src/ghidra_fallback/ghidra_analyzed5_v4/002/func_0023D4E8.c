#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0023D2BC(int *param_1,int param_2);
extern int func_0023D3A0(int param_1);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_0034CA20(undefined4 *param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern uint DAT_0023d640;
extern int *DAT_0023d644;
extern float DAT_0023d648;
extern int *DAT_0023d64c;
extern uint DAT_0023d650;
extern char s_SE_PL_Hammer_HIT_BOYOYON_0023d66c[];
extern char s_SE_PL_Sword_HIT_BOYOYON_0023d654[];

// USA 0023D4E8 <- EU 0023D4E8 (Ghidra, non-matching)
// GLOBAL DAT_0023d640 uint
// GLOBAL DAT_0023d644 int *
// GLOBAL DAT_0023d648 float
// GLOBAL DAT_0023d64c int *
// GLOBAL DAT_0023d650 uint
// GLOBAL s_SE_PL_Hammer_HIT_BOYOYON_0023d66c string
// GLOBAL s_SE_PL_Sword_HIT_BOYOYON_0023d654 string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

undefined4 func_0023D4E8(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  func_0034CA20((undefined4 *)param_1[0x120]);
  objStack_18[0] = 0;
  objStack_18[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x11f],param_1 + 0x121,DAT_0023d640,0,0);
  uVar2 = DAT_0023d650;
  piVar1 = DAT_0023d64c;
  piVar3 = (int *)param_1[0x120];
  if ((*piVar3 != 0) && (iVar4 = *DAT_0023d644, iVar4 != 0)) {
    switch(*(undefined1 *)((int)piVar3 + 0x21)) {
    case 5:
      if (((char)piVar3[8] != '\t') ||
         (iVar4 = func_002917A4(iVar4,param_1 + 0xf4,1,DAT_0023d648), iVar4 == 0))
      goto LAB_0023d630;
      objStack_18[1] = (uint)s_SE_PL_Sword_HIT_BOYOYON_0023d654;
      objStack_18[0] = uVar2;
      func_004EA104(*piVar1,(int *)objStack_18,0);
      break;
    default:
      func_0023D2BC(param_1,0);
      goto LAB_0023d630;
    case 7:
    case 9:
    case 10:
      break;
    case 8:
      if (((char)piVar3[8] != '\n') ||
         (iVar4 = func_00291A38(iVar4,param_1 + 0xf4,DAT_0023d648), iVar4 == 0)) goto LAB_0023d630;
      objStack_18[1] = (uint)s_SE_PL_Hammer_HIT_BOYOYON_0023d66c;
      objStack_18[0] = uVar2;
      func_004EA104(*piVar1,(int *)objStack_18,0);
    }
    func_0023D2BC(param_1,1);
  }
LAB_0023d630:
  return func_0023D3A0((int)param_1);
}

