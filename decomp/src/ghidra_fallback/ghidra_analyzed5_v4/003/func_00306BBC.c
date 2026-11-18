#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_006649C8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00306c8c;
extern float DAT_00306c90;
extern undefined DAT_00306c94;
extern uint DAT_00306cb4;
extern int *DAT_00306cb8;
extern char s_cf_00306c98[];
extern undefined4 _DAT_00306c94;

// USA 00306BBC <- EU 00306B98 (Ghidra, non-matching)
// GLOBAL DAT_00306c8c int *
// GLOBAL DAT_00306c90 float
// GLOBAL DAT_00306c94 undefined
// GLOBAL DAT_00306cb4 uint
// GLOBAL DAT_00306cb8 int *

/* WARNING: Variable defined which should be unmapped: objStack_18 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00306BBC(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  piVar2 = DAT_00306c8c;
  uVar4 = 0x400;
  if (*DAT_00306c8c != 0) {
    if (*(float *)(*(int *)(*DAT_00306c8c + 0x1c) + 4) <
        (*(float *)(*(int *)(param_1 + 0x44c) + 0x44) - *(float *)(*(int *)(param_1 + 0x44c) + 0x38)
        ) * DAT_00306c90 + *(float *)(param_1 + 0x3d4)) {
      uVar4 = 0x600;
    }
  }
  objStack_18[0] = 0;
  objStack_18[1] = 0;
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x450),param_1 + 0x45c,uVar4,0,0);
  cVar1 = *(char *)(*(int *)(param_1 + 0x454) + 0x21);
  if (cVar1 == '\x05') {
    if ((*piVar2 != 0) &&
       (iVar3 = func_002917A4(*piVar2,param_1 + 0x3d0,0,ALBW_AS_F32(_DAT_00306c94)), iVar3 != 0)) {
      objStack_18[1] = (int)s_cf_00306c98;
      objStack_18[0] = DAT_00306cb4;
      return func_004EA104(*DAT_00306cb8,(int *)objStack_18,0);
    }
  }
  else if (cVar1 == '\b') {
    func_006649C8((undefined4 *)(param_1 + 0x410),1);
  }
  return 0;
}

