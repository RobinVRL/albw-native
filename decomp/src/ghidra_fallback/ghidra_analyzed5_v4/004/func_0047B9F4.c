#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_00478A6C(int param_1,uint param_2,uint param_3);
extern int func_00479548(int param_1,uint param_2);
extern int func_0047A8C4(undefined4 param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066BE5C(undefined4 *param_1,char param_2);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int *DAT_0047bd58;
extern int DAT_0047bd5c;
extern char s_SE_S_ITEM_RETURN_0047bd78[];
extern char s_SE_S_ITEM_RETURN_END_0047bd60[];
extern char s_SE_S_ITEM_RETURN_END_BUTTON_0047bd8c[];

// USA 0047B9F4 <- EU 0047B9CC (Ghidra, non-matching)
// GLOBAL DAT_0047bd58 int *
// GLOBAL DAT_0047bd5c int
// GLOBAL s_SE_S_ITEM_RETURN_0047bd78 string
// GLOBAL s_SE_S_ITEM_RETURN_END_0047bd60 string
// GLOBAL s_SE_S_ITEM_RETURN_END_BUTTON_0047bd8c string

undefined4 func_0047B9F4(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  iVar9 = DAT_0047bd5c;
  piVar5 = DAT_0047bd58;
  if ((*(char *)(*(int *)(param_1 + 0x200) + 0x24) == '\x04') &&
     (cVar1 = *(char *)(*(int *)(param_1 + 0x204) + 0x24), cVar1 == '\0' || cVar1 == '\x04')) {
    bVar3 = false;
    bVar2 = false;
    if (*(byte *)(param_1 + 0x308) < 0x14) {
      if (*(char *)(param_1 + 0x30a) == '\x14') {
        iVar9 = *(int *)(param_1 + 500);
        func_0031B6A0(iVar9 + 0x60,-1,0);
        *(undefined1 *)(iVar9 + 0xe4) = 0xff;
      }
      else if (*(char *)(param_1 + 0x30a) == '\x15') {
        iVar9 = *(int *)(param_1 + 0x1f8);
        func_0031B6A0(iVar9 + 0x60,-1,0);
        *(undefined1 *)(iVar9 + 0xe4) = 0xff;
      }
      uVar4 = func_0047A8C4((int)*(char *)(*(int *)(param_1 + 0x200) + 0xb4));
      if (-1 < (int)uVar4) {
        piVar5 = (int *)(param_1 + 0x118);
        if (uVar4 < 0x14) {
          piVar5 = piVar5 + uVar4;
        }
        iVar9 = *piVar5;
        func_0066BE5C((undefined4 *)(iVar9 + 0x38),'\x04');
        func_00231340((short *)(iVar9 + 0xd4));
        uVar6 = (uint)*(char *)(param_1 + 0x308);
        piVar5 = (int *)(param_1 + 0x168);
        if (uVar6 < 0x14) {
          piVar5 = piVar5 + uVar6;
        }
        if (*(char *)(*piVar5 + 0xe0) != *(char *)(*(int *)(param_1 + 0x200) + 0xb4)) {
          iVar9 = *(int *)(param_1 + 0x204);
          if (*(char *)(iVar9 + 0x24) != '\0') {
            if (*(char *)(param_1 + 0x30a) == '\x14') {
              cVar1 = *(char *)(iVar9 + 0xb4);
              iVar9 = *(int *)(param_1 + 500);
              func_0031B6A0(iVar9 + 0x60,(int)cVar1,1);
              *(char *)(iVar9 + 0xe4) = cVar1;
              if ('\a' < *(char *)(*(int *)(param_1 + 500) + 0x3c)) {
                func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\v');
              }
              bVar2 = true;
            }
            else if (*(char *)(param_1 + 0x30a) == '\x15') {
              cVar1 = *(char *)(iVar9 + 0xb4);
              iVar9 = *(int *)(param_1 + 0x1f8);
              func_0031B6A0(iVar9 + 0x60,(int)cVar1,1);
              *(char *)(iVar9 + 0xe4) = cVar1;
              if ('\a' < *(char *)(*(int *)(param_1 + 0x1f8) + 0x3c)) {
                func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\v');
              }
              bVar3 = true;
            }
            else {
              piVar5 = (int *)(param_1 + 0x168);
              if (uVar6 < 0x14) {
                piVar5 = piVar5 + uVar6;
              }
              iVar9 = *piVar5;
              func_0066BE5C((undefined4 *)(iVar9 + 0x38),'\x04');
              func_00231340((short *)(iVar9 + 0xd4));
            }
          }
          piVar5 = (int *)(param_1 + 0x118);
          if (uVar4 < 0x14) {
            piVar5 = piVar5 + uVar4;
          }
          uVar4 = 0;
          do {
            if (*(int *)(param_1 + 0x168 + uVar4 * 4) == *piVar5) {
              func_00478A6C(param_1,(int)*(char *)(param_1 + 0x308),uVar4);
              break;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 != 0x14);
        }
      }
    }
    else if ((uint)(int)*(char *)(param_1 + 0x30a) < 0x14) {
      iVar10 = *(int *)(param_1 + 0x168 + *(char *)(param_1 + 0x30a) * 4);
      func_0066BE5C((undefined4 *)(iVar10 + 0x38),'\x04');
      func_00231340((short *)(iVar10 + 0xd4));
      local_24 = s_SE_S_ITEM_RETURN_END_0047bd60;
      local_28 = iVar9;
      puVar7 = (undefined4 *)(param_1 + 0x168);
      if ((uint)(int)*(char *)(param_1 + 0x30a) < 0x14) {
        puVar7 = puVar7 + *(char *)(param_1 + 0x30a);
      }
      func_00533078(*puVar7,&local_28,0);
      local_24 = s_SE_S_ITEM_RETURN_0047bd78;
      local_28 = iVar9;
      func_002DF0B0(*piVar5,&local_28,0);
      *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_1 + 0x30a);
    }
    else {
      cVar1 = *(char *)(*(int *)(param_1 + 0x200) + 0xb4);
      if (cVar1 != -1) {
        uVar4 = 0;
        do {
          piVar8 = (int *)(param_1 + 0x168);
          if (uVar4 < 0x14) {
            piVar8 = piVar8 + uVar4;
          }
          if (*(char *)(*piVar8 + 0xe0) == cVar1) goto LAB_0047bcb8;
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 0x14);
      }
      uVar4 = 0xffffffff;
LAB_0047bcb8:
      *(char *)(param_1 + 0x308) = (char)uVar4;
      local_24 = s_SE_S_ITEM_RETURN_END_BUTTON_0047bd8c;
      local_28 = iVar9;
      func_00533078(*(undefined4 *)(param_1 + 500),&local_28,0);
      local_24 = s_SE_S_ITEM_RETURN_0047bd78;
      local_28 = iVar9;
      func_002DF0B0(*piVar5,&local_28,0);
    }
    func_0066BF2C((undefined4 *)(*(int *)(param_1 + 0x204) + 0x20),'\0');
    func_00479548(param_1,0xffffffff);
    *(undefined1 *)(param_1 + 0x30a) = 0xff;
    if (!bVar2 && !bVar3) {
      return func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x05');
    }
    func_0066BF2C((undefined4 *)(*(int *)(param_1 + 0x200) + 0x20),'\0');
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x04');
  }
  return 0;
}

