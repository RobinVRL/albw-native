#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern float DAT_0032a1d4;
extern float DAT_0032a1d8;
extern float DAT_0032a1dc;
extern float DAT_0032a1e0;
extern undefined4 DAT_0032a1e4;
extern int *DAT_0032a1e8;

// USA 0032A0A8 <- EU 0032A084 (Ghidra, non-matching)
// GLOBAL DAT_0032a1d4 float
// GLOBAL DAT_0032a1d8 float
// GLOBAL DAT_0032a1dc float
// GLOBAL DAT_0032a1e0 float
// GLOBAL DAT_0032a1e4 undefined4
// GLOBAL DAT_0032a1e8 int *

uint func_0032A0A8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_r6;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined2 *)(albw_frame + 0x18))
  #define uStack_36 (*(ushort *)(albw_frame + 0x1a))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined1 *)(albw_frame + 0x28))
  fVar8 = DAT_0032a1dc;
  iVar6 = *(int *)(param_1 + 0x3d0);
  fVar5 = *(float *)(param_1 + 0x3d4);
  iVar7 = *(int *)(param_1 + 0x3d8);
  piVar1 = *(int **)(param_1 + 0x42c);
  fVar4 = ((*(float *)(*(int *)(param_1 + 0xa88) + 0x74) - DAT_0032a1d4) / DAT_0032a1d8) *
          *(float *)(param_1 + 0xc44);
  if (piVar1 != (int *)0x0) {
    fVar5 = *(float *)(param_1 + 0xc) + ALBW_AS_F32(piVar1[0x17]) * DAT_0032a1e0;
    piVar1[0x19] = (int)ALBW_AS_U32(fVar4);
    piVar1[0x18] = (int)ALBW_AS_U32((fVar4 * fVar8));
    piVar1[0x16] = (int)ALBW_AS_U32((fVar4 * fVar8));
    piVar1[1] = iVar6;
    piVar1[2] = (int)ALBW_AS_U32(fVar5);
    piVar1[3] = iVar7;
    func_004356B4(piVar1);
  }
  uVar3 = *(int *)(param_1 + 0x59c) << 0x18;
  if (-1 < (int)uVar3) {
    iVar2 = *(int *)(param_1 + 0xa8c);
    *(float *)(iVar2 + 100) = fVar4;
    *(float *)(iVar2 + 0x60) = fVar4 * fVar8;
    *(float *)(iVar2 + 0x58) = fVar4 * fVar8;
    iVar2 = *(int *)(param_1 + 0xa8c);
    *(int *)(iVar2 + 4) = iVar6;
    *(float *)(iVar2 + 8) = fVar5;
    *(int *)(iVar2 + 0xc) = iVar7;
    func_004356B4(*(int **)(param_1 + 0xa8c));
    local_48 = 0;
    local_40 = 0;
    local_28 = 0;
    local_44 = param_1 + 0xbec;
    local_2c = *(undefined4 *)(param_1 + 0xa8c);
    local_3c = *(undefined4 *)(param_1 + 0x2cc);
    (*(undefined4 *)&local_38) = CONCAT22((ushort)((uint)unaff_r6 >> 0x10) | (ushort)((uint)DAT_0032a1e4 >> 0x10),
                         *(undefined2 *)(param_1 + 0x54));
    local_34 = 1;
    local_30 = *(undefined4 *)(param_1 + 0xa90);
    uVar3 = func_004A8F40(*DAT_0032a1e8,&local_48,0x1600);
  }
  return uVar3;
}

