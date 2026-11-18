#include "ghidra_types.h"

extern int func_003CBE84(uint *param_1,uint param_2,uint *param_3,int param_4);
extern int func_003FA8AC(int param_1,ushort *param_2,int param_3);
extern int func_00565D80(int *param_1,undefined4 *param_2,int *param_3,int param_4);
extern undefined4 DAT_0056557c;
extern undefined4 DAT_00565580;
extern undefined4 DAT_00565584;
extern undefined4 DAT_00565588;
extern undefined4 DAT_0056558c;
extern undefined4 DAT_00565590;
extern undefined4 DAT_00565594;
extern uint DAT_00565598;
extern int DAT_0056559c;
extern float DAT_005655a0;
extern uint DAT_005655a4;

// USA 00565204 <- EU 005651DC (Ghidra, non-matching)
// GLOBAL DAT_0056557c undefined4
// GLOBAL DAT_00565580 undefined4
// GLOBAL DAT_00565584 undefined4
// GLOBAL DAT_00565588 undefined4
// GLOBAL DAT_0056558c undefined4
// GLOBAL DAT_00565590 undefined4
// GLOBAL DAT_00565594 undefined4
// GLOBAL DAT_00565598 uint
// GLOBAL DAT_0056559c int
// GLOBAL DAT_005655a0 float
// GLOBAL DAT_005655a4 uint

void func_00565204(int *param_1,int *param_2,ushort *param_3,int *param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = DAT_0056557c;
  if ((*param_3 & 0x400) != 0) {
    uVar9 = *(uint *)(param_3 + 4);
    puVar3 = (undefined4 *)*param_2;
    *puVar3 = *(undefined4 *)(param_3 + (uVar9 & 0xf) * 2 + 0x12);
    puVar3[1] = uVar1;
    *param_2 = (int)(puVar3 + 2);
    uVar1 = DAT_00565580;
    puVar3[2] = *(undefined4 *)((int)param_3 + ((uVar9 & 0xf0) >> 2) + 0x24);
    puVar3[3] = uVar1;
    *param_2 = (int)(puVar3 + 4);
    uVar1 = DAT_00565584;
    puVar3[4] = *(undefined4 *)((int)param_3 + ((uVar9 & 0xf00) >> 6) + 0x24);
    puVar3[5] = uVar1;
    *param_2 = (int)(puVar3 + 6);
    uVar1 = DAT_00565588;
    puVar3[6] = *(undefined4 *)((int)param_3 + ((uVar9 & 0xf000) >> 10) + 0x24);
    puVar3[7] = uVar1;
    *param_2 = (int)(puVar3 + 8);
    uVar1 = DAT_0056558c;
    puVar3[8] = *(undefined4 *)((int)param_3 + ((uVar9 & 0xf0000) >> 0xe) + 0x24);
    puVar3[9] = uVar1;
    *param_2 = (int)(puVar3 + 10);
    uVar1 = DAT_00565590;
    puVar3[10] = *(undefined4 *)((int)param_3 + ((uVar9 & 0xf00000) >> 0x12) + 0x24);
    puVar3[0xb] = uVar1;
    *param_2 = (int)(puVar3 + 0xc);
  }
  uVar1 = DAT_00565594;
  if ((*param_3 & 0x800) != 0) {
    puVar3 = (undefined4 *)*param_2;
    *puVar3 = *(undefined4 *)(param_3 + 0x28);
    puVar3[1] = uVar1;
    *param_2 = (int)(puVar3 + 2);
  }
  iVar4 = func_003FA8AC((int)(param_3 + 0x2a),param_3,(int)param_4);
  uVar9 = DAT_00565598;
  if (iVar4 != 0) {
    puVar5 = func_003CBE84((uint *)*param_2,
                           (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xce),
                           (uint *)(param_3 + 0x2a),8);
    *param_2 = (int)puVar5;
    if ((char)param_3[0x72] != '\0') {
      *puVar5 = *(byte *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xe6) | 0x80000000;
      puVar5[1] = uVar9;
      puVar5[2] = *(uint *)(param_3 + 0x70);
      puVar5[3] = *(uint *)(param_3 + 0x6e);
      puVar5[4] = *(uint *)(param_3 + 0x6c);
      puVar5[5] = *(uint *)(param_3 + 0x6a);
      *param_2 = (int)(puVar5 + 6);
    }
  }
  iVar4 = DAT_0056559c;
  if ((*param_3 & 0x8000) != 0) {
    puVar3 = (undefined4 *)*param_2;
    *puVar3 = *(undefined4 *)(param_3 + 0x98);
    puVar3[1] = iVar4;
    *param_2 = (int)(puVar3 + 2);
    puVar3[2] = *(undefined4 *)(param_3 + 0x9a);
    puVar3[3] = iVar4 + 0x10;
    *param_2 = (int)(puVar3 + 4);
    puVar3[4] = *(undefined4 *)(param_3 + 0x9c);
    puVar3[5] = iVar4 + 0x18;
    *param_2 = (int)(puVar3 + 6);
  }
  fVar2 = DAT_005655a0;
  if ((*param_3 & 0x200) != 0) {
    uVar6 = *(uint *)(param_3 + 0x20);
    uVar7 = *(uint *)(param_3 + 0x22);
    fVar10 = (float)VectorSignedToFloat((uVar6 << 8) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)VectorSignedToFloat(uVar6 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = (float)VectorSignedToFloat((uVar6 << 0x10) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = fVar10 * DAT_005655a0;
    uVar6 = *(uint *)(*param_1 + 0x88);
    puVar5 = (uint *)*param_2;
    fVar13 = fVar13 * DAT_005655a0;
    fVar15 = fVar15 * DAT_005655a0;
    fVar11 = (float)VectorSignedToFloat((uVar7 << 0x10) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)VectorSignedToFloat((uVar7 << 8) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = (float)VectorSignedToFloat(uVar7 >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * DAT_005655a0;
    fVar14 = fVar14 * DAT_005655a0;
    fVar12 = (float)VectorSignedToFloat(uVar7 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
    *puVar5 = *(byte *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xf6) | 0x80000000;
    puVar5[1] = uVar9;
    puVar5[2] = uVar6;
    puVar5[3] = (uint)ALBW_AS_U32(fVar10);
    puVar5[4] = (uint)ALBW_AS_U32(fVar13);
    puVar5[5] = (uint)ALBW_AS_U32(fVar15);
    *param_2 = (int)(puVar5 + 6);
    puVar5[6] = *(byte *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xfe) | 0x80000000;
    puVar5[7] = uVar9;
    puVar5[8] = (uint)ALBW_AS_U32((fVar16 * fVar2));
    puVar5[9] = (uint)ALBW_AS_U32(fVar14);
    puVar5[10] = (uint)ALBW_AS_U32(fVar11);
    puVar5[0xb] = (uint)ALBW_AS_U32((fVar12 * fVar2));
    *param_2 = (int)(puVar5 + 0xc);
  }
  if ((*param_3 & 1) != 0) {
    pbVar8 = (byte *)(*param_4 + (uint)param_3[0x10] * 0x278);
    if ((*pbVar8 & 1) != 0 || (*param_3 & 0x200) != 0) {
      func_00565D80(param_1,param_2,param_4,(int)param_3);
      uVar9 = DAT_005655a4;
      puVar5 = (uint *)*param_2;
      *puVar5 = (uint)pbVar8[6] | (uint)pbVar8[5] << 10 | (uint)pbVar8[4] << 0x14;
      puVar5[1] = uVar9;
      *param_2 = (int)(puVar5 + 2);
    }
  }
  return;
}

