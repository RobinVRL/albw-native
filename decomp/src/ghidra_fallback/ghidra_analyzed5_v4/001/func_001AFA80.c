// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_001B09B4(int param_1);
extern int func_002226D8(int param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004F7E8C();
extern int func_004F8DF4(int *param_1,uint param_2);
extern int func_00521184();
extern int func_00537B38(int param_1);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0068C690(float *param_1);
extern int DAT_001afc9c;
extern int *DAT_001afca0;
extern uint *DAT_001afca4;
extern int *DAT_001afca8;
extern int *DAT_001afcac;
extern int *DAT_001afcb0;

// USA 001AFA80 <- EU 001AFA80 (Ghidra, non-matching)
// GLOBAL DAT_001afc9c int
// GLOBAL DAT_001afca0 int *
// GLOBAL DAT_001afca4 uint *
// GLOBAL DAT_001afca8 int *
// GLOBAL DAT_001afcac int *
// GLOBAL DAT_001afcb0 int *

undefined4 func_001AFA80(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(int *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2be (*(undefined2 *)(albw_frame + 0x32))
  #define local_2bc (*(ushort *)(albw_frame + 0x34))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_29c (*(undefined4 *)(albw_frame + 0x54))
  #define local_298 (*(undefined2 *)(albw_frame + 0x58))
  #define local_28 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_24 (*(float *)(albw_frame + 0x2cc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x2d0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x2d4))
  bVar2 = func_001B09B4((int)param_1);
  if (bVar2) {
    *(undefined1 *)((int)param_1 + 0xa32) = 1;
    bVar2 = func_004F8DF4(param_1,0xf);
    uVar3 = 0;
    if (bVar2) {
      uVar3 = 1;
    }
  }
  else {
    if (*(char *)((int)param_1 + 0xa33) == '\0') {
      bVar2 = (char)param_1[0x28d] != '\0';
      iVar4 = 0;
      if (bVar2) {
        iVar4 = *(int *)(param_2 + 0x2c);
      }
      if ((bVar2 && iVar4 != 0) &&
         ((cVar1 = *(char *)(iVar4 + 1), cVar1 != '\b' ||
          ((int)(uint)*(ushort *)(iVar4 + 0x10) < (int)*(short *)(DAT_001afc9c + (int)param_1))))) {
        if (cVar1 == '\x05') {
          iVar4 = func_00537B38(*DAT_001afca0);
          if (iVar4 != 3) goto LAB_001afc54;
        }
        else if (cVar1 < '\x05') {
          if (cVar1 != '\x01' && cVar1 != '\x03') goto LAB_001afc54;
        }
        else if (cVar1 != '\b' && cVar1 != '\x0f') goto LAB_001afc54;
        uVar5 = *(uint *)(param_2 + 0x2c);
        bVar2 = *(char *)(uVar5 + 1) == '\x03';
        if (bVar2) {
          uVar5 = (uint)*(byte *)(uVar5 + 3);
        }
        if (!bVar2 || uVar5 != 2) {
          *(undefined1 *)(param_1 + 0x28d) = 0;
          iVar4 = *(int *)(param_1[0x266] + 0x18);
          local_2c8 = 0;
          local_2c4 = 0;
          local_2cc = 0;
          local_2a0 = 0;
          local_29c = 0;
          local_28 = 0;
          func_002DFF7C(&local_2e8);
          local_2e8 = func_0019B04C(*DAT_001afca4);
          uVar3 = func_00581D60(*DAT_001afca8);
          local_298 = (undefined2)uVar3;
          cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
          if (cVar1 == '\x01') {
            local_2c8 = param_1[0xfa];
          }
          else if (cVar1 == '\b' || cVar1 == '\x0f') {
            local_24 = *(float *)(param_2 + 0x10);
            uStack_20 = *(undefined4 *)(param_2 + 0x14);
            uStack_1c = *(undefined4 *)(param_2 + 0x18);
            func_00115C70(&local_24,&local_24,(float *)(param_1 + 0xf4));
            local_2c8 = func_0068C690(&local_24);
          }
          else {
            local_2c8 = func_00521184((int)param_1);
          }
          local_2e4 = *(undefined4 *)(iVar4 + 0x8c);
          local_2e0 = *(undefined4 *)(iVar4 + 0x9c);
          local_2dc = *(undefined4 *)(iVar4 + 0xac);
          local_2be = 0;
          iVar6 = func_00588BE4((int)param_1);
          local_2bc = (ushort)(iVar6 == *DAT_001afcac);
          piVar7 = func_004C4AF4(*DAT_001afcb0,&local_2e8,0);
          if (piVar7 != (int *)0x0) {
            func_001151EC(piVar7 + 0x10e,(undefined4 *)(iVar4 + 0x80));
          }
          func_002226D8(param_1[0x266]);
        }
      }
LAB_001afc54:
      uVar3 = func_004F7E8C((int)param_1,param_2);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}

