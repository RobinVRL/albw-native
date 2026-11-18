#include "ghidra_types.h"

extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_00151358(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_0048B330(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491404(float *param_1,float *param_2);
extern int func_004914B4(float *param_1,float *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_00520FC0(void);
extern float DAT_00142890;
extern int *DAT_00142894;
extern undefined4 *DAT_00142898;
extern float *DAT_0014289c;
extern float DAT_001428a0;
extern float DAT_001428a4;
extern float DAT_001428a8;
extern uint DAT_001428ac;
extern float DAT_001428b0;
extern int DAT_001428b4;
extern float DAT_001428b8;
extern float DAT_001428bc;
extern float DAT_001428c0;
extern int DAT_001428c4;
extern float DAT_001428c8;
extern int DAT_001428cc;

// USA 001424F0 <- EU 001424F0 (Ghidra, non-matching)
// GLOBAL DAT_00142890 float
// GLOBAL DAT_00142894 int *
// GLOBAL DAT_00142898 undefined4 *
// GLOBAL DAT_0014289c float *
// GLOBAL DAT_001428a0 float
// GLOBAL DAT_001428a4 float
// GLOBAL DAT_001428a8 float
// GLOBAL DAT_001428ac uint
// GLOBAL DAT_001428b0 float
// GLOBAL DAT_001428b4 int
// GLOBAL DAT_001428b8 float
// GLOBAL DAT_001428bc float
// GLOBAL DAT_001428c0 float
// GLOBAL DAT_001428c4 int
// GLOBAL DAT_001428c8 float
// GLOBAL DAT_001428cc int

undefined4 func_001424F0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_110 (*(float *)(albw_frame + 0x0))
  #define local_10c (*(undefined4 *)(albw_frame + 0x4))
  #define local_108 (*(undefined4 *)(albw_frame + 0x8))
  #define local_104 (*(float *)(albw_frame + 0xc))
  #define local_100 (*(undefined4 *)(albw_frame + 0x10))
  #define local_fc (*(undefined4 *)(albw_frame + 0x14))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_f4 (*(float *)(albw_frame + 0x1c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ec (*(undefined4 *)(albw_frame + 0x24))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_e4 (*(float *)(albw_frame + 0x2c))
  #define local_e0 (*(float *)(albw_frame + 0x30))
  #define local_dc (*(float *)(albw_frame + 0x34))
  #define local_d8 (*(float *)(albw_frame + 0x38))
  #define afStack_d4 ((float *)(albw_frame + 0x3c))
  #define afStack_b0 ((float *)(albw_frame + 0x60))
  #define afStack_8c ((float *)(albw_frame + 0x84))
  #define local_68 ((float *)(albw_frame + 0xa8))
  #define local_60 (*(float *)(albw_frame + 0xb0))
  #define afStack_58 ((float *)(albw_frame + 0xb8))
  #define afStack_48 ((float *)(albw_frame + 0xc8))
  #define afStack_38 ((float *)(albw_frame + 0xd8))
  uVar6 = *(uint *)(param_1 + 1000);
  iVar2 = *(int *)(param_1 + 0x50c);
  uVar7 = *(uint *)(param_1 + 0x510);
  func_001151D8(afStack_d4,(undefined4 *)(param_1 + 0x548));
  if ((*(char *)(param_1 + 0x500) == '\0') && (*DAT_00142894 <= *(int *)(param_1 + 0x50c))) {
    fVar12 = DAT_00142890;
    func_001151F8(&local_110,afStack_d4,DAT_00142898);
    *(float *)(param_1 + 0x588) = fVar12;
  }
  else {
    fVar12 = DAT_00142890;
    func_00491338(afStack_8c,-iVar2,uVar6,uVar7);
    fVar11 = *(float *)(param_1 + 0x588);
    if ((int)ALBW_AS_U32(fVar11) < 0x3f800000) {
      func_004914B4(afStack_48,afStack_d4);
      func_004914B4(afStack_38,afStack_8c);
      func_0048B330(afStack_58,afStack_48,afStack_38,fVar11);
      func_00491404(afStack_8c,afStack_58);
      *(float *)(param_1 + 0x588) = *(float *)(param_1 + 0x588) + fVar12;
    }
    func_001151F8(&local_110,afStack_8c,DAT_00142898);
  }
  iVar2 = *(int *)(param_1 + 0x490);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(float *)(iVar2 + 0x80) = local_110;
  *(undefined4 *)(iVar2 + 0x84) = local_10c;
  *(undefined4 *)(iVar2 + 0x88) = local_108;
  *(float *)(iVar2 + 0x8c) = local_104 + *(float *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar2 + 0x90) = local_100;
  *(undefined4 *)(iVar2 + 0x94) = local_fc;
  *(undefined4 *)(iVar2 + 0x98) = local_f8;
  *(float *)(iVar2 + 0x9c) = local_f4 + *(float *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar2 + 0xa0) = local_f0;
  *(undefined4 *)(iVar2 + 0xa4) = local_ec;
  *(undefined4 *)(iVar2 + 0xa8) = local_e8;
  pfVar3 = DAT_0014289c;
  *(float *)(iVar2 + 0xac) = local_e4 + *(float *)(param_1 + 0x3d8);
  *(uint *)(*(int *)(param_1 + 0x490) + 0x164) =
       *(uint *)(*(int *)(param_1 + 0x490) + 0x164) | 0x40000000;
  local_e0 = *pfVar3;
  local_dc = pfVar3[1];
  local_d8 = pfVar3[2];
  func_00115D18(&local_e0,&local_110,&local_e0);
  func_00115C54(&local_e0,&local_e0,(float *)(param_1 + 0x3d0));
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(local_68,pfVar3,&local_e0);
  func_00115DC8(local_68);
  fVar11 = DAT_001428a4;
  fVar12 = DAT_001428a0;
  fVar9 = *(float *)(param_1 + 0x3dc) * local_68[0] + *(float *)(param_1 + 0x3e4) * local_60;
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar9 < DAT_001428a0) << 0x1f |
          (uint)(fVar9 == DAT_001428a0) << 0x1e;
  uVar7 = uVar6 | (uint)(NAN(fVar9) || NAN(DAT_001428a0)) << 0x1c;
  bVar1 = (byte)(uVar6 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar7 >> 0x1c) & 1)) {
    fVar10 = local_dc - (pfVar3[1] + DAT_001428a8);
    fVar9 = DAT_001428a4;
    if (DAT_001428ac <= *(uint *)(param_1 + 0x3e0)) {
      fVar9 = DAT_001428b0;
    }
    if ((DAT_001428b4 <= (int)ALBW_AS_U32(fVar10)) &&
       (uVar7 = in_fpscr & 0xfffffff | (uint)(fVar9 <= fVar10) << 0x1d, !SUB41(uVar7 >> 0x1d,0))) {
      local_dc = pfVar3[1] + DAT_001428a8;
    }
  }
  iVar2 = *(int *)(param_1 + 0x498);
  *(float *)(iVar2 + 4) = local_e0;
  *(float *)(iVar2 + 8) = local_dc;
  *(float *)(iVar2 + 0xc) = local_d8;
  func_004356B4(*(int **)(param_1 + 0x498));
  func_004CEAF0(*(int *)(param_1 + 0x490));
  fVar9 = *(float *)(param_1 + 0x58c);
  if (param_2 == 0) {
    if ((int)ALBW_AS_U32(fVar9) < 0x3f800000) {
      fVar9 = fVar9 + DAT_001428b8;
      *(float *)(param_1 + 0x58c) = fVar9;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar9)) {
        fVar9 = fVar11;
      }
      *(float *)(param_1 + 0x58c) = fVar9;
    }
  }
  else {
    fVar9 = fVar9 - DAT_001428b8;
    *(float *)(param_1 + 0x58c) = fVar9;
    uVar7 = uVar7 & 0xfffffff | (uint)(fVar9 == fVar12) << 0x1e | (uint)(fVar12 <= fVar9) << 0x1d;
    bVar1 = (byte)(uVar7 >> 0x18);
    if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
      return func_00151148(*(int *)(param_1 + 0x494),0);
    }
  }
  func_00491624(afStack_b0,0,*(uint *)(param_1 + 1000),0);
  iVar2 = DAT_001428cc;
  iVar5 = DAT_001428c4 + (*(uint *)(param_1 + 0x50c) >> 0x18) * 0x10;
  fVar11 = (float)VectorUnsignedToFloat
                            (*(uint *)(param_1 + 0x50c) & 0xffffff,(byte)(uVar7 >> 0x15) & 3);
  fVar9 = *(float *)(param_1 + 0x58c) * DAT_001428bc;
  piVar4 = *(int **)(param_1 + 0x494);
  fVar11 = *(float *)(iVar5 + 8) + *(float *)(iVar5 + 0xc) * fVar11 * DAT_001428c0;
  if (fVar11 <= fVar12) {
    fVar11 = -fVar11;
  }
  piVar4[6] = (int)ALBW_AS_U32(((DAT_001428bc + fVar11 * DAT_001428c8) * *(float *)(param_1 + 0x58c)));
  piVar4[4] = (int)ALBW_AS_U32(fVar9);
  piVar4[5] = iVar2;
  func_00151358(piVar4);
  func_0015133C(*(int *)(param_1 + 0x494),afStack_b0);
  bVar8 = *(char *)(param_1 + 0x500) != '\x01';
  iVar2 = extraout_r1;
  if (bVar8) {
    iVar2 = param_1 + 0x400;
  }
  if (bVar8) {
    pfVar3 = (float *)(iVar2 + 100);
  }
  else {
    pfVar3 = (float *)(param_1 + 0x3d0);
  }
  return func_001512B4(*(int *)(param_1 + 0x494),pfVar3);
}

