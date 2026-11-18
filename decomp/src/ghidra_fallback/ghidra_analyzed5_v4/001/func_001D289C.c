#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern float func_00521274(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065C598(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern uint *DAT_001d2a40;
extern float DAT_001d2a44;
extern undefined4 DAT_001d2a48;
extern undefined4 DAT_001d2a4c;
extern int DAT_001d2a50;
extern float DAT_001d2a54;
extern int *DAT_001d2a58;
extern int DAT_001d2a70;
extern char s_SE_Kokko_V_NORMAL_001d2a5c[];

// USA 001D289C <- EU 001D289C (Ghidra, non-matching)
// GLOBAL DAT_001d2a40 uint *
// GLOBAL DAT_001d2a44 float
// GLOBAL DAT_001d2a48 undefined4
// GLOBAL DAT_001d2a4c undefined4
// GLOBAL DAT_001d2a50 int
// GLOBAL DAT_001d2a54 float
// GLOBAL DAT_001d2a58 int *
// GLOBAL DAT_001d2a70 int
// GLOBAL s_SE_Kokko_V_NORMAL_001d2a5c string

undefined4 func_001D289C(int param_1)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  #define local_1c (*(int *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  puVar1 = DAT_001d2a40;
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x5b8),*DAT_001d2a40,DAT_001d2a40[1],
                DAT_001d2a44);
  *(undefined4 *)(param_1 + 0x5c4) = DAT_001d2a48;
  bVar2 = func_00521018(param_1);
  uVar3 = param_1 + 0x500;
  if (!bVar2) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x5c2);
  }
  if (bVar2 || uVar3 != 0) {
    func_00115C70(afStack_28,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
    local_1c = func_0068C690(afStack_28);
    *(int *)(param_1 + 0x5b8) = local_1c;
    local_1c = *(int *)(param_1 + 1000) - local_1c;
    uVar3 = func_0058E2B8(&local_1c);
    if (*puVar1 < uVar3) {
      *(undefined4 *)(param_1 + 0x5c4) = DAT_001d2a4c;
    }
  }
  fVar6 = func_00521274(param_1);
  if (DAT_001d2a50 < (int)ALBW_AS_U32(fVar6)) {
    func_00115C70(afStack_28,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
    iVar4 = func_0068C690(afStack_28);
    *(int *)(param_1 + 0x5b8) = iVar4;
  }
  pfVar5 = (float *)func_00520FC0();
  fVar6 = *pfVar5 - *(float *)(param_1 + 0x3d0);
  fVar8 = pfVar5[2] - *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32((fVar6 * fVar6 + fVar8 * fVar8)) < 0x40000001) {
    func_001DDDE8(*DAT_001d2a58,(float *)(param_1 + 0x3d0),1,DAT_001d2a54);
  }
  if (*(uint *)(param_1 + 0x59c) < *(uint *)(param_1 + 0x5a0)) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) + 1;
  }
  else {
    uVar3 = VectorFloatToUnsigned
                      (ALBW_AS_F32(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4f8) + 0x14) + 0x14)),3);
    uVar7 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4f8) + 0x14) + 8)),3)
    ;
    if ((uVar3 & 0xff) == (uVar7 & 0xff)) {
      func_0065C598((undefined4 *)(param_1 + 0x4fc),0);
    }
  }
  local_14 = s_SE_Kokko_V_NORMAL_001d2a5c;
  local_18 = DAT_001d2a70;
  return func_001507D8(param_1,&local_18,0);
}

