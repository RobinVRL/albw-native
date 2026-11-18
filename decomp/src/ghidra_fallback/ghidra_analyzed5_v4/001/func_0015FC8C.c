#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0015B580(int param_1,uint param_2);
extern int func_0015B650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0015FB88(int param_1,int param_2);
extern int func_0052FD14(int param_1,undefined4 *param_2);
extern int func_0054FB50(uint param_1,uint param_2,uint param_3);
extern int func_0054FB80(uint param_1,uint param_2,uint param_3);
extern int func_0054FBC4(int param_1,float *param_2,float *param_3);
extern int func_0058A7D4(void);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern uint DAT_0015ff64;
extern int *DAT_0015ff68;
extern int DAT_0015ff6c;
extern uint DAT_0015ff70;
extern undefined4 DAT_0015ff74;
extern undefined4 DAT_0015ff78;

// USA 0015FC8C <- EU 0015FC90 (Ghidra, non-matching)
// GLOBAL DAT_0015ff64 uint
// GLOBAL DAT_0015ff68 int *
// GLOBAL DAT_0015ff6c int
// GLOBAL DAT_0015ff70 uint
// GLOBAL DAT_0015ff74 undefined4
// GLOBAL DAT_0015ff78 undefined4

int func_0015FC8C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 extraout_r1;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(uint *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x4))
  #define local_38 ((uint *)(albw_frame + 0x8))
  uVar1 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  if (((3 < uVar1) || (uVar1 < 2)) || (iVar2 = uVar1 - 2, iVar2 < 0)) {
    local_40 = DAT_0015ff64;
    iVar2 = func_0052FD14(*DAT_0015ff68 + 0x3dbbc,&local_40);
    if ((iVar2 == 0) && (iVar2 = func_0015B650(param_1,extraout_r1,param_3,param_4), iVar2 == 0)) {
      iVar3 = func_0015FB88((int)param_1,8);
      iVar2 = 0;
      if (iVar3 != 0) {
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        uVar1 = DAT_0015ff70;
        local_38[2] = 0;
        local_38[0] = *(uint *)(DAT_0015ff6c + (int)((ulonglong)uVar5 * 6 >> 0x20) * 4);
        iVar2 = 0;
        do {
          if (*(uint *)(DAT_0015ff6c + iVar2 * 4) == local_38[0]) {
            if (-1 < iVar2) {
              local_38[1] = *(undefined4 *)
                             (DAT_0015ff6c +
                             (iVar2 + 2U) * 4 +
                             (uint)((ulonglong)(iVar2 + 2U) * (ulonglong)DAT_0015ff70 >> 0x22) *
                             -0x18);
              goto LAB_0015fd90;
            }
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 6);
        local_38[1] = 0;
LAB_0015fd90:
        iVar2 = 0;
        do {
          if (*(uint *)(DAT_0015ff6c + iVar2 * 4) == local_38[0]) {
            if (-1 < iVar2) {
              local_38[2] = *(undefined4 *)
                             (DAT_0015ff6c +
                             (iVar2 + 4U) * 4 +
                             (uint)((ulonglong)(iVar2 + 4U) * (ulonglong)DAT_0015ff70 >> 0x22) *
                             -0x18);
            }
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 6);
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        iVar3 = (int)((ulonglong)uVar5 * 3 >> 0x20);
        while ((-1 < (int)param_1[0x382] && (local_38[iVar3] == param_1[0x382]))) {
          puVar4 = (uint *)func_0058A7D4();
          uVar5 = func_00111A64(puVar4);
          iVar3 = (int)((ulonglong)uVar5 * 3 >> 0x20);
        }
        puVar7 = param_1 + 0x26d;
        uVar8 = local_38[iVar3];
        uVar5 = func_0054FBC4((int)puVar7,(float *)(param_1 + 0x265),(float *)0x0);
        uVar6 = func_0054FB50((uint)puVar7,uVar5,uVar8);
        uVar5 = func_0054FB80((uint)puVar7,uVar5,uVar8);
        uVar10 = CONCAT44(DAT_0015ff78,DAT_0015ff74);
        if (uVar6 < uVar5) {
          param_1[0x244] = DAT_0015ff74;
        }
        else {
          param_1[0x244] = DAT_0015ff78;
        }
        param_1[0x245] = uVar8;
        func_0065836C(param_1 + 0x22f,10);
        uVar5 = 0;
        do {
          puVar7 = func_0015B580((int)param_1,uVar5);
          iVar2 = 0;
          if (puVar7 != (undefined4 *)0x0) {
            uVar6 = iVar3 + uVar5 + 1;
            uVar9 = local_38[uVar6 + (uint)((ulonglong)uVar6 * (ulonglong)uVar1 >> 0x21) * -3];
            local_3c = puVar7 + 0x26d;
            local_40 = func_0054FBC4((int)local_3c,(float *)(puVar7 + 0x265),(float *)0x0);
            uVar6 = func_0054FB50((uint)local_3c,local_40,uVar9);
            uVar8 = func_0054FB80((uint)local_3c,local_40,uVar9);
            if (uVar6 < uVar8) {
              puVar7[0x244] = (int)uVar10;
            }
            else {
              puVar7[0x244] = (int)((ulonglong)uVar10 >> 0x20);
            }
            puVar7[0x245] = uVar9;
            iVar2 = func_0065836C(puVar7 + 0x22f,10);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 2);
      }
    }
  }
  return iVar2;
}

