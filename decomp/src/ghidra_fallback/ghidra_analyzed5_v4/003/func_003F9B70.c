#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_003CBB00(undefined1 *param_1);
extern int func_003CBC1C(undefined4 *param_1,int param_2);
extern int func_003CBCDC(undefined1 *param_1);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_003CD350(undefined4 *param_1,int param_2);
extern int func_003CD588(int param_1);
extern int func_003E2134(void);
extern int func_003FA4EC(uint *param_1,int param_2,uint param_3,int param_4,undefined1 param_5);
extern int func_00561E28(char *param_1,uint *param_2,int param_3);
extern int func_00561EB4(char *param_1,int *param_2,int param_3);
extern int func_00561F74(char *param_1,undefined4 *param_2,int param_3);
extern int func_00561FF0(char *param_1,undefined4 *param_2,int param_3);
extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern int func_00562430(char *param_1,uint *param_2,int param_3);
extern int func_00562488(char *param_1,uint *param_2,int param_3);
extern int func_00562530(char *param_1,uint *param_2,int param_3,int param_4);
extern int func_00563918(int param_1,uint *param_2);
extern undefined *DAT_003f9fe0;
extern uint DAT_003f9fe4;
extern uint DAT_003f9fe8;
extern uint DAT_003f9fec;
extern undefined *DAT_003f9ff0;
extern uint DAT_003f9ff4;

// USA 003F9B70 <- EU 003F9B50 (Ghidra, non-matching)
// GLOBAL DAT_003f9fe0 undefined *
// GLOBAL DAT_003f9fe4 uint
// GLOBAL DAT_003f9fe8 uint
// GLOBAL DAT_003f9fec uint
// GLOBAL DAT_003f9ff0 undefined *
// GLOBAL DAT_003f9ff4 uint

/* WARNING: Variable defined which should be unmapped: objStack_140 */

void func_003F9B70(int *param_1,undefined4 *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ulonglong in_d8;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define objStack_140 ((uint *)(albw_frame + 0x0))
  #define acStack_130 ((char *)(albw_frame + 0x10))
  #define acStack_128 ((char *)(albw_frame + 0x18))
  #define acStack_110 ((char *)(albw_frame + 0x30))
  #define acStack_108 ((char *)(albw_frame + 0x38))
  #define acStack_ec ((char *)(albw_frame + 0x54))
  #define local_e4 ((char *)(albw_frame + 0x5c))
  #define iStack_c4 (*(int *)(albw_frame + 0x7c))
  #define auStack_c0 ((undefined1 *)(albw_frame + 0x80))
  #define local_44 (*(undefined1 *)(albw_frame + 0xfc))
  #define local_3b (*(undefined1 *)(albw_frame + 0x105))
  puVar13 = param_2;
  if ((char)param_3[5] != '\0') {
    puVar13 = param_2 + (param_3[3] + 0xf & 0xfffffff0) + (uint)param_3[1] * 0x112;
    puVar4 = (uint *)0x0;
    if (puVar13 != (undefined4 *)0x0) {
      *puVar13 = 0;
      puVar13[1] = 0;
      iVar3 = func_00100118((int)(puVar13 + 2),DAT_003f9fe0,0x20,2);
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x48) = 0;
      *(undefined4 *)(iVar3 + 0x4c) = 0;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      *(undefined4 *)(iVar3 + 0x54) = 0;
      *(undefined4 *)(iVar3 + 0x58) = 0;
      puVar4 = (uint *)(iVar3 + -8);
    }
    param_1[0x19] = (int)puVar4;
    objStack_140[0] = (uint)*(byte *)((int)param_3 + 0xb);
    puVar13 = puVar13 + 0x19;
    func_003FA4EC(puVar4,(int)param_2,(uint)param_3[1],(uint)param_3[3],
                  *(byte *)((int)param_3 + 0xb));
  }
  uVar1 = *param_3;
  uVar11 = 0;
  uVar8 = (uint)((ulonglong)DAT_003f9fe4 * (ulonglong)((uVar1 + 1) * 0x6c) + (ulonglong)DAT_003f9fe4
                >> 0x26);
  if (uVar8 != 0) {
    in_d8 = (ulonglong)DAT_003f9fe8;
  }
  param_1[0x11] = uVar8;
  param_1[0x10] = (int)puVar13;
  if (uVar8 != 0) {
    do {
      puVar12 = (undefined1 *)(param_1[0x10] + uVar11 * 0x6c);
      if (puVar12 != (undefined1 *)0x0) {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar5 = func_003E2134();
        func_001119F4((undefined4 *)(puVar12 + 4),puVar5);
        puVar5 = func_003E2134();
        func_001119F4((undefined4 *)(puVar12 + 0x34),puVar5);
        *(int *)(puVar12 + 100) = (int)in_d8;
        *(int *)(puVar12 + 0x68) = (int)in_d8;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)param_1[0x11]);
  }
  uVar2 = param_3[1];
  puVar5 = puVar13 + (uVar1 + 1) * 0x1b;
  uVar11 = 0;
  uVar8 = (uint)((ulonglong)((uint)uVar2 * 0x278) * (ulonglong)DAT_003f9fec >> 0x29);
  param_1[1] = uVar8;
  if (uVar8 != 0) {
    puVar13 = (undefined4 *)0xff000000;
  }
  *param_1 = (int)puVar5;
  if (uVar8 != 0) {
    do {
      puVar12 = (undefined1 *)(*param_1 + uVar11 * 0x278);
      if (puVar12 != (undefined1 *)0x0) {
        *puVar12 = 0;
        iVar3 = func_003CBCDC(puVar12 + 4);
        iVar3 = func_00100118(iVar3 + 0x1b0,DAT_003f9ff0,0x10,8);
        iVar7 = 0;
        *(undefined4 **)(iVar3 + 0x80) = puVar13;
        do {
          iVar10 = iVar3 + -0x1b4 + iVar7 * 4;
          iVar7 = iVar7 + 2;
          *(undefined4 *)(iVar10 + 0x238) = 0;
          *(undefined4 *)(iVar10 + 600) = 0;
          *(undefined4 *)(iVar10 + 0x23c) = 0;
          *(undefined4 *)(iVar10 + 0x25c) = 0;
        } while (iVar7 < 8);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)param_1[1]);
  }
  uVar1 = param_3[2];
  uVar11 = 0;
  uVar8 = (uint)((ulonglong)((uint)uVar1 * 0x218) * (ulonglong)DAT_003f9ff4 >> 0x24);
  param_1[3] = uVar8;
  param_1[2] = (int)(puVar5 + (uint)uVar2 * 0x9e);
  if (uVar8 != 0) {
    do {
      puVar12 = (undefined1 *)(param_1[2] + uVar11 * 0x218);
      if (puVar12 != (undefined1 *)0x0) {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        func_00110490((undefined4 *)(puVar12 + 8),0x210);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)param_1[3]);
  }
  puVar13 = puVar5 + (uint)uVar2 * 0x9e + (uint)uVar1 * 0x86;
  if ((char)param_3[4] != '\0') {
    if (puVar13 != (undefined4 *)0x0) {
      puVar13[3] = 0;
      puVar13[4] = 0;
      *(undefined1 *)(puVar13 + 5) = 0;
      *(undefined1 *)((int)puVar13 + 0x15) = 2;
      *(undefined1 *)((int)puVar13 + 0x16) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x17) = 0xff;
      puVar13[6] = 0;
      *(undefined1 *)(puVar13 + 7) = 0;
      *(undefined1 *)((int)puVar13 + 0x1d) = 2;
      *(undefined1 *)((int)puVar13 + 0x1e) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x1f) = 0xff;
      puVar13[8] = 0;
      *(undefined1 *)(puVar13 + 9) = 0;
      *(undefined1 *)((int)puVar13 + 0x25) = 2;
      *(undefined1 *)((int)puVar13 + 0x26) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x27) = 0xff;
      puVar13[10] = 0;
      *(undefined1 *)(puVar13 + 0xb) = 1;
      *(undefined1 *)((int)puVar13 + 0x2d) = 2;
      *(undefined1 *)((int)puVar13 + 0x2e) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x2f) = 0xff;
      puVar13[0xc] = 0;
      *(undefined1 *)(puVar13 + 0xd) = 1;
      *(undefined1 *)((int)puVar13 + 0x35) = 2;
      *(undefined1 *)((int)puVar13 + 0x36) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x37) = 0xff;
      puVar13[0xe] = 0;
      *(undefined1 *)(puVar13 + 0xf) = 1;
      *(undefined1 *)((int)puVar13 + 0x3d) = 2;
      *(undefined1 *)((int)puVar13 + 0x3e) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x3f) = 0xff;
      puVar13[0x10] = 0;
      *(undefined1 *)(puVar13 + 0x11) = 1;
      *(undefined1 *)((int)puVar13 + 0x45) = 2;
      *(undefined1 *)((int)puVar13 + 0x46) = 0xff;
      *(undefined1 *)((int)puVar13 + 0x47) = 0xff;
      puVar13[0x12] = 0;
    }
    param_1[0x18] = (int)puVar13;
    puVar13 = (undefined4 *)((int)puVar13 + 0x5bU & 0xfffffff0);
    puVar5 = func_003CD350(puVar13,1);
    puVar4 = func_003CBC1C(puVar5,1);
    func_003CD588((int)auStack_c0);
    local_44 = 0;
    local_3b = 0;
    puVar4 = func_00563918((int)auStack_c0,puVar4);
    func_003CBB00((undefined1 *)objStack_140);
    local_e4[0] = '\0';
    if (*(char *)((int)param_3 + 9) != '\0') {
      (*(undefined1 *)((char *)&objStack_140[0] + 0)) = 1;
    }
    piVar6 = (int *)func_00561F74(local_e4,puVar4,0);
    puVar5 = (undefined4 *)func_00561EB4((char *)objStack_140,piVar6,0);
    puVar4 = (uint *)func_00561FF0(acStack_130,puVar5,0);
    puVar4 = func_00562530(acStack_128,puVar4,0,1);
    puVar4 = (uint *)func_00562430(acStack_110,puVar4,0);
    puVar4 = (uint *)func_00561E28(acStack_108,puVar4,0);
    puVar5 = (undefined4 *)func_00562488(acStack_ec,puVar4,0);
    puVar5 = func_00562280(&iStack_c4,puVar5,1);
    iVar3 = param_1[0x18];
    uVar8 = ((uint)puVar5 & 0xfffffffc) + 8;
    if (((uVar8 & 0xf) != 0) && (uVar8 = 4 - (uVar8 * 0x10000000 >> 0x1e), 0 < (int)uVar8)) {
      puVar9 = puVar5 + -1;
      if ((uVar8 & 1) != 0) {
        *puVar5 = 0;
        puVar9 = puVar5;
      }
      for (iVar7 = (int)uVar8 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar9[1] = 0;
        puVar9 = puVar9 + 2;
        *puVar9 = 0;
      }
      puVar5 = puVar5 + uVar8;
    }
    puVar5 = func_003CC030(puVar5,1);
    *(int *)(iVar3 + 0x10) = (int)puVar5 - (int)puVar13 >> 2;
    *(undefined4 **)(iVar3 + 0xc) = puVar13;
  }
  return;
}

