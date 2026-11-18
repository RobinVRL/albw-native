#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int *DAT_001c70cc;
extern float DAT_001c70d0;
extern float DAT_001c70d4;
extern int *DAT_001c70d8;
extern undefined4 *DAT_001c70dc;
extern float DAT_001c70e0;

// USA 001C6FA8 <- EU 001C6FA8 (Ghidra, non-matching)
// GLOBAL DAT_001c70cc int *
// GLOBAL DAT_001c70d0 float
// GLOBAL DAT_001c70d4 float
// GLOBAL DAT_001c70d8 int *
// GLOBAL DAT_001c70dc undefined4 *
// GLOBAL DAT_001c70e0 float

void func_001C6FA8(int param_1)

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
  #define local_54 (*(int *)(albw_frame + 0xc))
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
  pfVar1 = *(float **)(*DAT_001c70cc + 0x1c);
  fVar5 = *pfVar1 - *(float *)(param_1 + 0x3d0);
  fVar6 = pfVar1[2] - *(float *)(param_1 + 0x3d8);
  fVar6 = fVar5 * fVar5 + fVar6 * fVar6;
  fVar5 = pfVar1[1] - *(float *)(param_1 + 0x3d4);
  if (fVar5 <= DAT_001c70d0) {
    fVar5 = -fVar5;
  }
  bVar4 = SBORROW4((int)ALBW_AS_U32(fVar5),(int)ALBW_AS_U32(DAT_001c70d4));
  iVar2 = (int)ALBW_AS_U32(fVar5) - (int)ALBW_AS_U32(DAT_001c70d4);
  bVar3 = fVar5 == DAT_001c70d4;
  if ((int)ALBW_AS_U32(fVar5) <= (int)ALBW_AS_U32(DAT_001c70d4)) {
    bVar4 = SBORROW4((int)ALBW_AS_U32(fVar6),0x3e800000);
    iVar2 = (int)ALBW_AS_U32(fVar6) + -0x3e800000;
    bVar3 = fVar6 == 0.25;
  }
  if (bVar3 || iVar2 < 0 != bVar4) {
    iVar2 = *(int *)(*DAT_001c70d8 + 0x18);
    local_5c = *DAT_001c70dc;
    uStack_58 = DAT_001c70dc[1];
    local_54 = DAT_001c70dc[2];
    uStack_50 = DAT_001c70dc[3];
    uStack_4c = DAT_001c70dc[4];
    uStack_48 = DAT_001c70dc[5];
    uStack_44 = DAT_001c70dc[6];
    fStack_40 = ALBW_AS_F32(DAT_001c70dc[7]);
    local_34 = DAT_001c70dc[10];
    local_3c = DAT_001c70dc[8];
    uStack_38 = DAT_001c70dc[9];
    fVar5 = DAT_001c70d0;
    func_00115C54(afStack_24,(float *)(param_1 + 0x3d0),&fStack_40);
    local_54 = *(int *)(iVar2 + 0x1a8) + local_54;
    local_30 = DAT_001c70e0;
    local_28 = DAT_001c70e0;
    local_2c = fVar5;
    iVar2 = func_00120FBC(iVar2,(undefined4 *)(param_1 + 0x46c),afStack_24,&local_5c,
                          local_34 & 0xffff,0,&local_30);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x474) = 5;
      *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 8;
    }
  }
  return;
}

