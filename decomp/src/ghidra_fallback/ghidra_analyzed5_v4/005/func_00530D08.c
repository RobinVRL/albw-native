#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 *DAT_00530dfc;
extern float DAT_00530e00;
extern undefined4 DAT_00530e04;
extern float DAT_00530e08;
extern int DAT_00530e0c;

// USA 00530D08 <- EU 00530CE0 (Ghidra, non-matching)
// GLOBAL DAT_00530dfc undefined4 *
// GLOBAL DAT_00530e00 float
// GLOBAL DAT_00530e04 undefined4
// GLOBAL DAT_00530e08 float
// GLOBAL DAT_00530e0c int

undefined4 func_00530D08(int param_1,float *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  puVar1 = DAT_00530dfc;
  if (((DAT_00530dfc[-10] & 1) == 0) && (iVar2 = func_00100174(DAT_00530dfc + -10), iVar2 != 0)) {
    *puVar1 = 0x40000000;
    puVar1[1] = 0xc0000000;
  }
  func_004D80A4(&fStack_3c,*(uint *)(param_1 + 1000),DAT_00530e00);
  local_38 = DAT_00530e04;
  uVar4 = DAT_00530e04;
  func_00115C54(&local_50,(float *)(param_1 + 0x3d0),&fStack_3c);
  iVar2 = DAT_00530e0c;
  local_30 = local_50;
  uStack_2c = uStack_4c;
  fStack_28 = local_48;
  uVar3 = 0;
  fparam_0 = DAT_00530e08;
  do {
    func_004D80A4(&local_48,puVar1[uVar3] + *(int *)(param_1 + 1000),fparam_0);
    local_44 = uVar4;
    func_00115C54(&local_48,&local_48,&local_30);
    if ((int)ALBW_AS_U32(SQRT((local_48 - *param_2) * (local_48 - *param_2) +
                  (local_40 - param_2[2]) * (local_40 - param_2[2]))) < iVar2) {
      return 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return 0;
}

