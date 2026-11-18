#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int *DAT_0019bad8;
extern float DAT_0019badc;
extern float DAT_0019bae0;
extern int *DAT_0019bae4;
extern undefined4 *DAT_0019bae8;
extern float DAT_0019baec;

// USA 0019B9C4 <- EU 0019B9C4 (Ghidra, non-matching)
// GLOBAL DAT_0019bad8 int *
// GLOBAL DAT_0019badc float
// GLOBAL DAT_0019bae0 float
// GLOBAL DAT_0019bae4 int *
// GLOBAL DAT_0019bae8 undefined4 *
// GLOBAL DAT_0019baec float

void func_0019B9C4(int param_1)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(uint *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define afStack_24 ((float *)(albw_frame + 0x3c))
  pfVar1 = *(float **)(*DAT_0019bad8 + 0x1c);
  fVar6 = *pfVar1 - *(float *)(param_1 + 0x3d0);
  fVar5 = pfVar1[2] - *(float *)(param_1 + 0x3d8);
  fVar6 = fVar6 * fVar6 + fVar5 * fVar5;
  fVar5 = pfVar1[1] - *(float *)(param_1 + 0x3d4);
  if (fVar5 <= DAT_0019badc) {
    fVar5 = -fVar5;
  }
  bVar4 = SBORROW4((int)ALBW_AS_U32(fVar5),(int)ALBW_AS_U32(DAT_0019bae0));
  iVar2 = (int)ALBW_AS_U32(fVar5) - (int)ALBW_AS_U32(DAT_0019bae0);
  bVar3 = fVar5 == DAT_0019bae0;
  if ((int)ALBW_AS_U32(fVar5) <= (int)ALBW_AS_U32(DAT_0019bae0)) {
    bVar4 = SBORROW4((int)ALBW_AS_U32(fVar6),0x3e800000);
    iVar2 = (int)ALBW_AS_U32(fVar6) + -0x3e800000;
    bVar3 = fVar6 == 0.25;
  }
  if (bVar3 || iVar2 < 0 != bVar4) {
    iVar2 = *(int *)(*DAT_0019bae4 + 0x18);
    local_5c = *DAT_0019bae8;
    uStack_58 = DAT_0019bae8[1];
    uStack_54 = DAT_0019bae8[2];
    uStack_50 = DAT_0019bae8[3];
    uStack_4c = DAT_0019bae8[4];
    uStack_48 = DAT_0019bae8[5];
    uStack_44 = DAT_0019bae8[6];
    fStack_40 = ALBW_AS_F32(DAT_0019bae8[7]);
    local_34 = DAT_0019bae8[10];
    local_3c = DAT_0019bae8[8];
    uStack_38 = DAT_0019bae8[9];
    fVar5 = DAT_0019badc;
    func_00115C54(afStack_24,(float *)(param_1 + 0x3d0),&fStack_40);
    local_30 = DAT_0019baec;
    local_28 = DAT_0019baec;
    local_2c = fVar5;
    iVar2 = func_00120FBC(iVar2,(undefined4 *)(param_1 + 0x474),afStack_24,&local_5c,
                          local_34 & 0xffff,0,&local_30);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x47c) = 5;
      *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 8;
    }
  }
  return;
}

