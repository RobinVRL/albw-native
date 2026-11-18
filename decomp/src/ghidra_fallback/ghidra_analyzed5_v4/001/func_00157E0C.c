#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern undefined8 func_00323DFC(char *param_1,int param_2,int *param_3);
extern int func_0043672C(int param_1,undefined4 *param_2);
extern int func_00521A50(int param_1);
extern int func_0058A7D4(void);
extern int func_00657FA0(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_0015806c;
extern int DAT_00158070;
extern uint DAT_00158074;
extern uint DAT_00158078;
extern uint DAT_0015807c;

// USA 00157E0C <- EU 00157E10 (Ghidra, non-matching)
// GLOBAL DAT_0015806c int *
// GLOBAL DAT_00158070 int
// GLOBAL DAT_00158074 uint
// GLOBAL DAT_00158078 uint
// GLOBAL DAT_0015807c uint

undefined4 func_00157E0C(int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((float *)(albw_frame + 0x8))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c ((float *)(albw_frame + 0x14))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c ((float *)(albw_frame + 0x24))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  piVar1 = DAT_0015806c;
  func_00115C70(local_58,*(float **)(*DAT_0015806c + 0x1c),(float *)(param_1 + 0x3d0));
  iVar2 = func_00521A50(param_1);
  puVar9 = (undefined4 *)(param_1 + 0x8bc);
  if (iVar2 != 0) {
    iVar2 = func_0068C690(local_58);
    *(int *)(param_1 + 0xa20) = iVar2;
    *(undefined4 *)(param_1 + 0xa2c) = 4;
    return func_00657FA0(puVar9,7);
  }
  if (*(uint *)(param_1 + 0x8e8) <= *(uint *)(param_1 + 0x8e4)) {
    puVar3 = (uint *)func_0058A7D4();
    uVar4 = func_00111A64(puVar3);
    *(char *)(param_1 + 0x8e0) = (char)((ulonglong)uVar4 * 4 >> 0x20) * '\x02' + '\x01';
    func_00115C70(local_58,(float *)(param_1 + 0xa14),(float *)(param_1 + 0x3d0));
    *(undefined1 *)(param_1 + 0xa28) = 0;
    func_00115C70(local_3c,*(float **)(*piVar1 + 0x1c),(float *)(param_1 + 0x3d0));
    if (DAT_00158070 < (int)ALBW_AS_U32((local_58[0] * local_58[0] + local_50 * local_50))) {
      iVar2 = 1;
      uVar11 = (ulonglong)DAT_00158074;
      iVar7 = 0;
      do {
        local_40 = 0;
        iVar8 = (int)(char)((char)iVar7 * '\x02' + '\x01');
        uVar12 = func_00323DFC((char *)(param_1 + 0x8f0),iVar8,&local_40);
        uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
        if (local_40 == 0) {
          func_0043672C(iVar8,local_4c);
          fVar10 = local_4c[0] * local_58[0] + local_44 * local_50;
          uVar4 = extraout_r1;
          if (ALBW_AS_F32(uVar11) < fVar10) {
            uVar11 = (ulonglong)(uint)ALBW_AS_U32(fVar10);
            iVar2 = iVar8;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
      *(char *)(param_1 + 0x8e0) = (char)iVar2;
    }
    else {
      uVar4 = DAT_00158078;
      if ((int)ALBW_AS_U32((local_3c[0] * local_3c[0] + local_34 * local_34)) < (int)DAT_00158078) {
        iVar2 = func_0068C690(local_3c);
        uVar12 = func_00114608(DAT_0015807c,extraout_r1_00);
        uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
        uVar5 = (int)uVar12 + iVar2;
        uVar6 = uVar5 >> 0x1d;
        if ((uVar6 != 0xffffffff) && ((uVar6 & 0x80000001) == 1)) {
          puVar3 = (uint *)func_0058A7D4();
          uVar6 = func_00111A64(puVar3);
          uVar4 = (uint)((ulonglong)uVar6 * 100);
          if ((ulonglong)uVar6 * 100 < 0x3200000000) {
            *(byte *)(param_1 + 0x8e0) = (byte)(uVar5 >> 0x1d);
            *(undefined1 *)(param_1 + 0xa28) = 1;
          }
        }
      }
    }
    uVar12 = func_00114608(DAT_0015807c,uVar4);
    if ((uint)((int)uVar12 + *(int *)(param_1 + 1000)) >> 0x1d != (int)*(char *)(param_1 + 0x8e0)) {
      *(int *)(param_1 + 0xa20) = (int)*(char *)(param_1 + 0x8e0) << 0x1d;
      *(undefined4 *)(param_1 + 0xa2c) = 0;
      return func_00657FA0(puVar9,7);
    }
    func_00657FA0(puVar9,0);
  }
  if (*(uint *)(param_1 + 0x8e4) < *(uint *)(param_1 + 0x8e8)) {
    *(uint *)(param_1 + 0x8e4) = *(uint *)(param_1 + 0x8e4) + 1;
  }
  return 0;
}

