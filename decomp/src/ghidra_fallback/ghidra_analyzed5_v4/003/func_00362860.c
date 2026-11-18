#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00491AFC(float *param_1,float fparam_0);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_00588F08(int param_1);
extern float DAT_00362ad8;
extern float DAT_00362adc;
extern float DAT_00362ae0;
extern int DAT_00362ae4;
extern int DAT_00362ae8;
extern float DAT_00362aec;
extern int *DAT_00362af0;
extern float *DAT_00362af4;
extern float DAT_00362af8;

// USA 00362860 <- EU 0036283C (Ghidra, non-matching)
// GLOBAL DAT_00362ad8 float
// GLOBAL DAT_00362adc float
// GLOBAL DAT_00362ae0 float
// GLOBAL DAT_00362ae4 int
// GLOBAL DAT_00362ae8 int
// GLOBAL DAT_00362aec float
// GLOBAL DAT_00362af0 int *
// GLOBAL DAT_00362af4 float *
// GLOBAL DAT_00362af8 float

undefined4 func_00362860(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define afStack_140 ((float *)(albw_frame + 0x0))
  #define local_110 (*(float *)(albw_frame + 0x30))
  #define local_10c (*(float *)(albw_frame + 0x34))
  #define local_108 (*(float *)(albw_frame + 0x38))
  #define local_104 (*(float *)(albw_frame + 0x3c))
  #define local_100 (*(float *)(albw_frame + 0x40))
  #define local_fc (*(float *)(albw_frame + 0x44))
  #define local_f8 (*(float *)(albw_frame + 0x48))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_f0 (*(float *)(albw_frame + 0x50))
  #define local_ec (*(float *)(albw_frame + 0x54))
  #define local_e8 (*(float *)(albw_frame + 0x58))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_e0 (*(float *)(albw_frame + 0x60))
  #define local_dc (*(float *)(albw_frame + 0x64))
  #define local_d8 (*(float *)(albw_frame + 0x68))
  #define local_d0 (*(float *)(albw_frame + 0x70))
  #define local_cc (*(float *)(albw_frame + 0x74))
  #define local_c8 (*(float *)(albw_frame + 0x78))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_c0 (*(float *)(albw_frame + 0x80))
  #define local_bc (*(float *)(albw_frame + 0x84))
  #define local_b8 (*(float *)(albw_frame + 0x88))
  #define local_b4 (*(uint *)(albw_frame + 0x8c))
  #define local_b0 (*(float *)(albw_frame + 0x90))
  #define local_ac (*(float *)(albw_frame + 0x94))
  #define local_a8 (*(float *)(albw_frame + 0x98))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x9c))
  #define afStack_a0 ((float *)(albw_frame + 0xa0))
  #define afStack_70 ((float *)(albw_frame + 0xd0))
  #define local_38 (*(float *)(albw_frame + 0x108))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x10c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x110))
  pfVar6 = afStack_140;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x28) == DAT_00362adc) << 0x1e;
    fVar7 = DAT_00362ad8;
    if (!SUB41(uVar1 >> 0x1e,0)) {
      iVar2 = DAT_00362ae4 + (*(uint *)(param_1 + 0x24) >> 0x18) * 0x10;
      fVar7 = (float)VectorUnsignedToFloat
                               (*(uint *)(param_1 + 0x24) & 0xffffff,(byte)(uVar1 >> 0x15) & 3);
      fVar7 = DAT_00362ad8 -
              *(float *)(param_1 + 0x28) *
              (*(float *)(iVar2 + 8) + *(float *)(iVar2 + 0xc) * fVar7 * DAT_00362ae0);
      if ((int)ALBW_AS_U32(fVar7) < DAT_00362ae8) {
        fVar7 = DAT_00362aec;
      }
    }
    fVar7 = *(float *)(*(int *)(param_1 + 0x30) + 200) * fVar7;
    fVar9 = DAT_00362ad8;
    fVar8 = DAT_00362adc;
    pfVar3 = (float *)func_00588F08(*DAT_00362af0);
    func_00115C54(&local_e0,pfVar3,(float *)(*(int *)(param_1 + 0x30) + 0xb0));
    local_38 = local_e0;
    uStack_34 = ALBW_AS_U32(local_dc);
    uStack_30 = ALBW_AS_U32(local_d8);
    func_00115C54(&local_e0,&local_38,DAT_00362af4);
    local_104 = local_e0;
    local_f4 = ALBW_AS_U32(local_dc);
    local_e4 = ALBW_AS_U32(local_d8);
    iVar2 = *(int *)(param_1 + 0x30);
    local_c4 = *(undefined4 *)(iVar2 + 0xbc);
    local_b4 = *(uint *)(iVar2 + 0xc0);
    local_a4 = *(undefined4 *)(iVar2 + 0xc4);
    iVar2 = *(int *)(param_1 + 0x30);
    fVar10 = DAT_00362af8;
    local_110 = fVar9;
    local_10c = fVar8;
    local_108 = fVar8;
    local_100 = fVar8;
    local_fc = fVar9;
    local_f8 = fVar8;
    local_f0 = fVar8;
    local_ec = fVar8;
    local_e8 = fVar9;
    local_d0 = fVar9;
    local_cc = fVar8;
    local_c8 = fVar8;
    local_c0 = fVar8;
    local_bc = fVar9;
    local_b8 = fVar8;
    local_b0 = fVar8;
    local_ac = fVar8;
    local_a8 = fVar9;
    uVar11 = func_00114608((uint)ALBW_AS_U32((*(float *)(iVar2 + 0xcc) * DAT_00362af8)),local_b4);
    uVar12 = func_00114608((uint)ALBW_AS_U32((*(float *)(iVar2 + 0xd0) * fVar10)),
                           (uint)((ulonglong)uVar11 >> 0x20));
    uVar13 = func_00114608((uint)ALBW_AS_U32((*(float *)(iVar2 + 0xd4) * fVar10)),
                           (uint)((ulonglong)uVar12 >> 0x20));
    piVar4 = (int *)uVar13;
    local_e0 = fVar8;
    local_dc = fVar8;
    local_d8 = fVar8;
    func_004D7EB0(afStack_140,(uint)uVar11,(uint)uVar12,&local_e0);
    func_00491E80(afStack_70,0,0,(uint)piVar4);
    func_001157FC(afStack_140,afStack_140,afStack_70);
    func_001157FC(afStack_140,afStack_140,&local_d0);
    func_00491AFC(afStack_140,fVar7);
    func_001157FC(afStack_a0,&local_110,afStack_140);
    iVar2 = *(int *)(param_1 + 0x14);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar2 + 0x80),afStack_a0);
    if (*(char *)(*(int *)(param_1 + 0x14) + 0x30) != '\0') {
      uVar5 = extraout_r1;
      if (*(int **)(param_1 + 0x18) != (int *)0x0) {
        func_00169A80(*(int **)(param_1 + 0x18),extraout_r1,pfVar6,piVar4);
        pfVar6 = (float *)0x0;
        func_00168E9C(*(int **)(param_1 + 0x18),*(int *)(param_1 + 0x14),(int *)0x0);
        uVar5 = extraout_r1_00;
      }
      if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
        func_00169A80(*(int **)(param_1 + 0x1c),uVar5,pfVar6,piVar4);
        pfVar6 = (float *)0x0;
        func_00168E9C(*(int **)(param_1 + 0x1c),*(int *)(param_1 + 0x14),(int *)0x0);
        uVar5 = extraout_r1_01;
      }
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        func_00169A80(*(int **)(param_1 + 0x20),uVar5,pfVar6,piVar4);
        func_00168E9C(*(int **)(param_1 + 0x20),*(int *)(param_1 + 0x14),(int *)0x0);
      }
    }
    return func_004CEAF0(*(int *)(param_1 + 0x14));
  }
  return 0;
}

