#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00357F68(int param_1,float *param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00521078(int param_1);
extern int func_0066645C(undefined4 *param_1,undefined1 param_2);

// USA 00357DA8 <- EU 00357D84 (Ghidra, non-matching)

void func_00357DA8(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  fVar7 = *(float *)(param_1 + 0x3d0);
  uVar6 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x944) == fVar7) << 0x1e |
          (uint)(fVar7 <= *(float *)(param_1 + 0x944)) << 0x1d;
  bVar1 = (byte)(uVar6 >> 0x18);
  bVar2 = (bool)(bVar1 >> 6);
  bVar5 = (bool)(bVar1 >> 5 & 1);
  if (!bVar5 || bVar2) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 == *(float *)(param_1 + 0x950)) << 0x1e |
            (uint)(*(float *)(param_1 + 0x950) <= fVar7) << 0x1d;
    bVar1 = (byte)(uVar6 >> 0x18);
    bVar2 = (bool)(bVar1 >> 6);
    bVar5 = (bool)(bVar1 >> 5 & 1);
  }
  if (!bVar5 || bVar2) {
    fVar7 = *(float *)(param_1 + 0x3d4);
    uVar3 = uVar6 & 0xfffffff;
    uVar6 = uVar3 | (uint)(*(float *)(param_1 + 0x948) == fVar7) << 0x1e |
            (uint)(fVar7 <= *(float *)(param_1 + 0x948)) << 0x1d;
    bVar1 = (byte)(uVar6 >> 0x18);
    bVar2 = (bool)(bVar1 >> 6);
    bVar5 = (bool)(bVar1 >> 5 & 1);
    if (!bVar5 || bVar2) {
      uVar6 = uVar3 | (uint)(fVar7 == *(float *)(param_1 + 0x954)) << 0x1e |
              (uint)(*(float *)(param_1 + 0x954) <= fVar7) << 0x1d;
      bVar1 = (byte)(uVar6 >> 0x18);
      bVar2 = (bool)(bVar1 >> 6);
      bVar5 = (bool)(bVar1 >> 5 & 1);
    }
    if (!bVar5 || bVar2) {
      fVar7 = *(float *)(param_1 + 0x3d8);
      uVar3 = uVar6 & 0xfffffff;
      uVar6 = uVar3 | (uint)(*(float *)(param_1 + 0x94c) == fVar7) << 0x1e |
              (uint)(fVar7 <= *(float *)(param_1 + 0x94c)) << 0x1d;
      bVar1 = (byte)(uVar6 >> 0x18);
      if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) &&
         (uVar3 = uVar3 | (uint)(*(float *)(param_1 + 0x958) < fVar7) << 0x1f,
         uVar6 = uVar3 | (uint)(NAN(*(float *)(param_1 + 0x958)) || NAN(fVar7)) << 0x1c,
         (byte)(uVar3 >> 0x1f) == ((byte)(uVar6 >> 0x1c) & 1))) goto LAB_00357e08;
    }
  }
  func_00357F68(param_1,(float *)(param_1 + 0x3dc));
LAB_00357e08:
  uVar3 = *(uint *)(param_1 + 0x920);
  fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar6 >> 0x15) & 3);
  local_14 = *(float *)(param_1 + 0x900) * fVar7 * fVar7 + *(float *)(param_1 + 0x904) * fVar7 +
             *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x3d4) = local_14;
  if (uVar3 < *(uint *)(param_1 + 0x924)) {
    *(uint *)(param_1 + 0x920) = uVar3 + 1;
  }
  local_18 = *(float *)(param_1 + 0x3d0);
  local_10 = *(float *)(param_1 + 0x3d8);
  func_00115C54(&local_18,&local_18,(float *)(param_1 + 0x3dc));
  func_00115C70(&local_18,&local_18,(float *)(param_1 + 0x368));
  iVar4 = func_004904CC(local_14,SQRT(local_18 * local_18 + local_10 * local_10));
  *(int *)(param_1 + 0x500) = -iVar4;
  bVar2 = func_00521078(param_1);
  if ((bVar2) || (*(float *)(param_1 + 0x3d4) <= *(float *)(param_1 + 0x930))) {
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x930);
    func_0066645C((undefined4 *)(param_1 + 0x8bc),1);
  }
  return;
}

