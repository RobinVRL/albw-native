#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_00427688(undefined4 param_1);
extern int func_00444180(int *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0044F468(int param_1);
extern int func_0047A9DC(int param_1,int param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int *DAT_00479dd8;
extern undefined4 DAT_00479ddc;
extern int DAT_00479df8;
extern char s_SE_S_ITEM_SELECT_APPEAR_00479de0[];

// USA 00479C44 <- EU 00479C1C (Ghidra, non-matching)
// GLOBAL DAT_00479dd8 int *
// GLOBAL DAT_00479ddc undefined4
// GLOBAL DAT_00479df8 int
// GLOBAL s_SE_S_ITEM_SELECT_APPEAR_00479de0 string

undefined4 func_00479C44(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int in_r3;
  int iVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0x30d) = 0;
  *(undefined1 *)(param_1 + 0x311) = 0;
  if (*(int *)(param_1 + 0x214) != 0) {
    func_0044F468(*(int *)(param_1 + 0x214));
  }
  if (*(int *)(param_1 + 0x210) != 0) {
    func_0044F468(*(int *)(param_1 + 0x210));
  }
  uVar7 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x168);
    if (uVar7 < 0x14) {
      piVar2 = piVar2 + uVar7;
    }
    iVar6 = *piVar2;
    iVar3 = func_00427688((int)*(char *)(iVar6 + 0xe0));
    if (iVar3 == 0) {
      *(undefined1 *)(iVar6 + 0xe1) = 0;
      if ((*(char *)(iVar6 + 0xd) == '\x01') ||
         ((*(char *)(iVar6 + 0xd) == '\x03' && (*(char *)(iVar6 + 0xe) == '\x03')))) {
        *(undefined1 *)(iVar6 + 0xe2) = 1;
        func_0012C718(iVar6);
      }
    }
    else {
      func_0031B6A0(iVar6 + 0x78,(int)*(char *)(iVar6 + 0xe0),0);
      *(undefined1 *)(iVar6 + 0xe1) = 1;
      if ((*(char *)(iVar6 + 0xd) == '\0') && (*(char *)(iVar6 + 0xe) == '\0')) {
        *(undefined1 *)(iVar6 + 0xe2) = 1;
        *(undefined1 *)(iVar6 + 0xe) = 1;
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x14);
  iVar3 = *(int *)(param_1 + 500);
  cVar1 = *(char *)(iVar3 + 0xe4);
  func_0031B6A0(iVar3 + 0x60,(int)cVar1,0);
  *(char *)(iVar3 + 0xe4) = cVar1;
  iVar3 = *(int *)(param_1 + 0x1f8);
  uVar5 = 0;
  cVar1 = *(char *)(iVar3 + 0xe4);
  func_0031B6A0(iVar3 + 0x60,(int)cVar1,0);
  *(char *)(iVar3 + 0xe4) = cVar1;
  func_0047A9DC(param_1,1);
  if (*(char *)(*(int *)(param_1 + 500) + 0xf7) != '\0') {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\b');
  }
  if (*(char *)(*(int *)(param_1 + 0x1f8) + 0xf7) != '\0') {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\b');
  }
  func_00444180(*(int **)(*DAT_00479dd8 + 0xf8),0,uVar5,in_r3);
  local_28 = DAT_00479df8;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = DAT_00479ddc;
  puVar4 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar4 = *puVar4 | 2;
  local_24 = s_SE_S_ITEM_SELECT_APPEAR_00479de0;
  func_00533078(param_1,&local_28,0);
  return func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\0');
}

