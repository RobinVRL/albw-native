#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BF2BC(int param_1);
extern int func_002C00A8(int param_1);
extern int func_00466B38(int param_1);
extern int func_00467DC4(int param_1);
extern int func_004762C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066E65C(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_00467d80;
extern int DAT_00467d98;
extern char s__SE_S_MAP_FLOOR_DOWN_00467d83[];
extern undefined4 _DAT_00467d80;

// USA 00467AE4 <- EU 00467ABC (Ghidra, non-matching)
// GLOBAL DAT_00467d80 undefined
// GLOBAL DAT_00467d98 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00467AE4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  undefined1 uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  func_00231448(param_1 + 200);
  fparam_0 = ALBW_AS_F32(_DAT_00467d80);
  func_002317C0((undefined2 *)(param_1 + 0xd4),ALBW_AS_F32(_DAT_00467d80));
  if ((*(uint *)(*(int *)(param_1 + 0x11c) + 0x18) & 4) == 0) {
    func_002317C0((undefined2 *)(*(int *)(param_1 + 0x11c) + 0x84),fparam_0);
  }
  if ((*(uint *)(*(int *)(param_1 + 0x120) + 0x18) & 4) == 0) {
    func_002317C0((undefined2 *)(*(int *)(param_1 + 0x120) + 0x84),fparam_0);
  }
  cVar1 = *(char *)(param_1 + 299);
  cVar7 = cVar1 + -1;
  if (cVar7 == '\0') {
    cVar7 = -1;
  }
  if (cVar7 <= *(char *)(param_1 + 0x125)) {
    func_002BF2BC(*(int *)(param_1 + 0x120));
  }
  *(char *)(param_1 + 299) = cVar7;
  uVar8 = 0;
  cVar7 = *(char *)(param_1 + 0x126) + -1;
  *(char *)(param_1 + 0x126) = cVar7;
  if (cVar7 == '\0') {
    *(undefined1 *)(param_1 + 0x126) = 0xff;
  }
  cVar7 = *(char *)(param_1 + 0x127) + -1;
  *(char *)(param_1 + 0x127) = cVar7;
  if (cVar7 == '\0') {
    *(undefined1 *)(param_1 + 0x127) = 0xff;
  }
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar8 < 4) {
      piVar2 = piVar2 + uVar8;
    }
    if (*piVar2 != 0) {
      iVar6 = (int)*(char *)(param_1 + 0x127);
      if ((iVar6 < 0) && (-1 < (int)(iVar6 + uVar8))) {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        param_3 = uVar8 + 1;
        iVar3 = *piVar2;
        *(int *)(iVar3 + 0xb0) = iVar6 + param_3;
        func_004762C4(iVar3,iVar6 + param_3,param_3,param_4);
      }
      else {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        iVar3 = *piVar2;
        *(uint *)(iVar3 + 0xb0) = iVar6 + uVar8;
        func_004762C4(iVar3,iVar6 + uVar8,param_3,param_4);
      }
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 4);
  func_00467DC4(param_1);
  func_00466B38(param_1);
  uVar8 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar8 < 4) {
      piVar2 = piVar2 + uVar8;
    }
    if (*piVar2 != 0) {
      piVar2 = (int *)(param_1 + 0x108);
      if (uVar8 < 4) {
        piVar2 = piVar2 + uVar8;
      }
      cVar7 = (char)*(undefined4 *)(*piVar2 + 0xb0);
      if (*(char *)(param_1 + 299) == cVar7) {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        iVar6 = *piVar2;
        func_0066E65C((undefined4 *)(iVar6 + 0x80),0);
        if (*(char *)(iVar6 + 0xb5) == '\0') {
          puVar4 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
          *puVar4 = *puVar4 | 0x40;
          func_002C00A8(*(int *)(iVar6 + 0x14));
          puVar4 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
          *puVar4 = *puVar4 | 2;
        }
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        iVar6 = *piVar2;
        if (*(byte *)(iVar6 + 0x84) < 2) {
          uVar5 = 1;
LAB_00467d44:
          func_0066E65C((undefined4 *)(iVar6 + 0x80),uVar5);
        }
      }
      else if (cVar7 == cVar1) {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        iVar6 = *piVar2;
        func_0066E65C((undefined4 *)(iVar6 + 0x80),2);
        puVar4 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
        *puVar4 = *puVar4 & 0xffbf;
        func_002C00A8(*(int *)(iVar6 + 0x14));
        puVar4 = (ushort *)(*(int *)(iVar6 + 0x14) + 0x16);
        *puVar4 = *puVar4 & 0xfffd;
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        iVar6 = *piVar2;
        if (*(char *)(iVar6 + 0x84) == '\x02' || *(char *)(iVar6 + 0x84) == '\x01') {
          uVar5 = 3;
          goto LAB_00467d44;
        }
      }
    }
    uVar8 = uVar8 + 1;
    if (3 < (int)uVar8) {
      local_24 = s__SE_S_MAP_FLOOR_DOWN_00467d83 + 1;
      local_28 = DAT_00467d98;
      return func_00533078(*(undefined4 *)(param_1 + 0x120),&local_28,0);
    }
  } while( true );
}

