#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00434F68(int *param_1,int *param_2,int param_3,int param_4,float *param_5);
extern int func_00581A08(void);
extern uint *DAT_0032807c;
extern undefined4 *DAT_00328080;
extern undefined4 DAT_00328084;
extern undefined4 DAT_00328088;
extern float *DAT_0032808c;
extern int DAT_00328090;
extern float DAT_00328094;
extern undefined4 DAT_00328098;

// USA 00327D4C <- EU 00327D28 (Ghidra, non-matching)
// GLOBAL DAT_0032807c uint *
// GLOBAL DAT_00328080 undefined4 *
// GLOBAL DAT_00328084 undefined4
// GLOBAL DAT_00328088 undefined4
// GLOBAL DAT_0032808c float *
// GLOBAL DAT_00328090 int
// GLOBAL DAT_00328094 float
// GLOBAL DAT_00328098 undefined4

void func_00327D4C(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_11c (*(float *)(albw_frame + 0x4))
  #define local_118 (*(float *)(albw_frame + 0x8))
  #define fStack_114 (*(float *)(albw_frame + 0xc))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ec (*(undefined4 *)(albw_frame + 0x34))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_dc (*(undefined4 *)(albw_frame + 0x44))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_cc (*(undefined4 *)(albw_frame + 0x54))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_bc (*(undefined4 *)(albw_frame + 0x64))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x68))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x70))
  #define local_ac (*(undefined4 *)(albw_frame + 0x74))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x78))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x80))
  #define local_9c (*(undefined4 *)(albw_frame + 0x84))
  #define local_98 (*(undefined4 *)(albw_frame + 0x88))
  #define local_94 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x90))
  #define local_8c (*(undefined2 *)(albw_frame + 0x94))
  #define local_88 (*(undefined4 *)(albw_frame + 0x98))
  #define local_80 ((byte *)(albw_frame + 0xa0))
  #define local_68 (*(undefined4 *)(albw_frame + 0xb8))
  #define afStack_64 ((float *)(albw_frame + 0xbc))
  #define local_58 (*(float *)(albw_frame + 0xc8))
  #define local_54 (*(float *)(albw_frame + 0xcc))
  #define fStack_50 (*(float *)(albw_frame + 0xd0))
  #define local_4c (*(float *)(albw_frame + 0xd4))
  #define local_48 (*(float *)(albw_frame + 0xd8))
  #define local_44 (*(float *)(albw_frame + 0xdc))
  #define local_40 (*(float *)(albw_frame + 0xe0))
  #define local_3c (*(float *)(albw_frame + 0xe4))
  #define fStack_38 (*(float *)(albw_frame + 0xe8))
  #define local_34 (*(float *)(albw_frame + 0xec))
  #define local_30 (*(float *)(albw_frame + 0xf0))
  #define fStack_2c (*(float *)(albw_frame + 0xf4))
  #define local_20 (*(float *)(albw_frame + 0x100))
  #define local_1c (*(undefined4 *)(albw_frame + 0x104))
  if (((*DAT_0032807c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0032807c), iVar1 != 0)) {
    *DAT_00328080 = DAT_00328084;
  }
  if ((param_2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*param_2)(param_2,DAT_00328080), puVar3 = param_2, iVar1 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[8] = 0;
  local_80[9] = 0;
  local_80[10] = 0;
  local_80[0xb] = 0;
  local_68 = DAT_00328088;
  local_1c = CONCAT22((*(undefined2 *)((char *)&local_1c + 2)),0x1f);
  if (puVar3 != (undefined4 *)0x0) {
    param_4 = puVar3 + 0x129;
  }
  if (puVar3 == (undefined4 *)0x0) {
    param_4 = (undefined4 *)0x0;
  }
  func_00434F68((int *)local_80,(int *)param_2[0x17],param_2[0x1c],(int)param_4,
                (float *)(param_2 + 1));
  uVar2 = local_1c;
  if ((~*(ushort *)(param_2 + 0x19) & 0x1f) != 0) {
    uVar2 = param_2[0x19];
  }
  local_1c = CONCAT22((*(undefined2 *)((char *)&local_1c + 2)),(short)uVar2);
  fVar6 = *(float *)(param_1 + 0x434);
  func_00115C70(&local_11c,(float *)(param_1 + 0x428),afStack_64);
  if ((((((local_11c * local_4c + local_118 * local_48 + fStack_114 * local_44 <= fVar6) &&
         (local_11c * local_40 + local_118 * local_3c + fStack_114 * fStack_38 <= fVar6)) &&
        (local_11c * local_34 + local_118 * local_30 + fStack_114 * fStack_2c <= local_20 + fVar6))
       && ((fVar5 = -(local_11c * local_58 + local_118 * local_54 + fStack_114 * fStack_50),
           -fVar6 <= fVar5 && (fVar5 <= fVar6)))) &&
      ((fVar5 != -3.4028235e+38 &&
       ((fVar6 = local_58 * *DAT_0032808c + local_54 * DAT_0032808c[1] + fStack_50 * DAT_0032808c[2]
        , (int)ALBW_AS_U32(fVar6) < DAT_00328090 && ((uint)ALBW_AS_U32(fVar6) < (uint)ALBW_AS_U32(DAT_00328094))))))) &&
     (piVar4 = *(int **)(param_1 + 0x424), *piVar4 < piVar4[1])) {
    func_00110D44(&local_f0,local_80,0x68);
    local_88 = param_2[0x1a];
    iVar1 = func_00581A08();
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    iVar1 = *piVar4;
    if (iVar1 < piVar4[1]) {
      *piVar4 = iVar1 + 1;
      puVar3 = (undefined4 *)(piVar4[2] + iVar1 * 0x70);
      *puVar3 = local_f0;
      puVar3[1] = local_ec;
      puVar3[2] = local_e8;
      puVar3[3] = local_e4;
      puVar3[4] = local_e0;
      puVar3[5] = local_dc;
      puVar3[6] = local_d8;
      puVar3[7] = local_d4;
      puVar3[8] = local_d0;
      puVar3[9] = local_cc;
      puVar3[10] = local_c8;
      puVar3[0xb] = local_c4;
      puVar3[0xc] = local_c0;
      puVar3[0xd] = local_bc;
      puVar3[0xe] = local_b8;
      puVar3[0xf] = local_b4;
      puVar3[0x10] = local_b0;
      puVar3[0x11] = local_ac;
      puVar3[0x12] = local_a8;
      puVar3[0x13] = local_a4;
      puVar3[0x14] = local_a0;
      puVar3[0x15] = local_9c;
      puVar3[0x16] = local_98;
      puVar3[0x17] = local_94;
      puVar3[0x18] = local_90;
      *(undefined2 *)(puVar3 + 0x19) = local_8c;
      puVar3[0x1a] = local_88;
      puVar3[0x1b] = uVar2;
    }
  }
  return;
}

