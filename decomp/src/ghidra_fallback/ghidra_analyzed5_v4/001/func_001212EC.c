#include "ghidra_types.h"

extern int func_001215C0(int param_1);
extern int func_00152078(undefined4 *param_1);
extern int func_001E8660(int param_1,undefined4 param_2,int *param_3);
extern int func_00351C7C(int param_1);
extern int func_00530780(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int *DAT_001214f0;

// USA 001212EC <- EU 001212EC (Ghidra, non-matching)
// GLOBAL DAT_001214f0 int *

undefined4 func_001212EC(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c ((char *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  func_00152078(&local_48);
  iVar2 = func_00530780(*(int *)(param_1 + 0x1c8),&local_48,&local_28);
  local_2c[0] = '\0';
  iVar3 = func_001E8660(*(int *)(param_1 + 0x1c8),local_2c,param_2);
  uVar4 = 0;
  if (iVar3 != 0) {
    if (local_2c[0] != '\0') {
      *(int *)(param_1 + 0x10c) = param_3;
      *(int *)(param_1 + 0x110) = param_3;
      *(int *)(param_1 + 0x108) = param_4;
      piVar1 = DAT_001214f0;
      *(undefined4 *)(param_1 + 0x1cc) = local_28;
      *(undefined4 *)(param_1 + 0x1d0) = uStack_24;
      *(undefined4 *)(param_1 + 0x1d4) = uStack_20;
      if ((param_3 == 0) && (iVar2 != 0)) {
        iVar2 = *piVar1;
        if (*(char *)(iVar2 + 0xe2) == '\0') {
          *(undefined4 *)(param_1 + 200) = local_48;
          *(undefined4 *)(param_1 + 0xcc) = local_44;
          *(undefined4 *)(param_1 + 0xd0) = local_40;
          *(undefined4 *)(param_1 + 0xd4) = local_3c;
          *(undefined4 *)(param_1 + 0xd8) = local_38;
          *(undefined4 *)(param_1 + 0xdc) = local_34;
          *(undefined4 *)(param_1 + 0xe0) = local_30;
        }
        else {
          *(undefined1 *)(iVar2 + 0xe2) = 0;
          *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar2 + 0xe4);
          *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar2 + 0xe8);
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar2 + 0xec);
          *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar2 + 0xf0);
          *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar2 + 0xf4);
          *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar2 + 0xf8);
          *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar2 + 0xfc);
        }
        *(undefined1 *)(*piVar1 + 0xe1) = 0;
        func_001215C0(param_1);
        *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x1b0);
        *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x1b4);
        *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x1b8);
        *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1bc);
        *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x1c0);
        *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x1c4);
      }
      iVar2 = *piVar1;
      if ((*(char *)(iVar2 + 0xe1) != '\0') && (*(char *)(iVar2 + 0xe2) == '\0')) {
        *(undefined1 *)(iVar2 + 0xe2) = 1;
        *(undefined4 *)(iVar2 + 0xe4) = local_48;
        *(undefined4 *)(iVar2 + 0xe8) = local_44;
        *(undefined4 *)(iVar2 + 0xec) = local_40;
        *(undefined4 *)(iVar2 + 0xf0) = local_3c;
        *(undefined4 *)(iVar2 + 0xf4) = local_38;
        *(undefined4 *)(iVar2 + 0xf8) = local_34;
        *(undefined4 *)(iVar2 + 0xfc) = local_30;
      }
      if (param_4 == 1) {
        *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x1bc);
        *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x1c0);
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c4);
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x1b0);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x1b4);
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1b8);
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xe8);
      }
      *(undefined1 *)(param_1 + 0x1ac) = 0;
    }
    func_00351C7C(*(int *)(param_1 + 0x184));
    uVar4 = 1;
  }
  return uVar4;
}

