#include "ghidra_types.h"

extern int func_0010BB50(undefined4 *param_1,undefined1 param_2);
extern int func_00297138(int param_1,int *param_2);
extern int func_004EAC54(int param_1,uint param_2);
extern int func_004EB9F4(int param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_0025b584;
extern int *DAT_0025b588;
extern int *DAT_0025b58c;
extern int *DAT_0025b590;
extern int DAT_0025b594;
extern undefined4 DAT_0025b598;
extern int DAT_0025b59c;
extern int *DAT_0025b5a0;

// USA 0025B398 <- EU 0025B3C0 (Ghidra, non-matching)
// GLOBAL DAT_0025b584 int *
// GLOBAL DAT_0025b588 int *
// GLOBAL DAT_0025b58c int *
// GLOBAL DAT_0025b590 int *
// GLOBAL DAT_0025b594 int
// GLOBAL DAT_0025b598 undefined4
// GLOBAL DAT_0025b59c int
// GLOBAL DAT_0025b5a0 int *

undefined4 func_0025B398(undefined4 *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  piVar2 = DAT_0025b58c;
  piVar1 = DAT_0025b588;
  if (*(char *)(*DAT_0025b584 + 0x25) == '\x02' || *(char *)(*DAT_0025b584 + 0x25) == '\x03')
  goto LAB_0025b570;
  if (*(char *)(param_1 + 1) == '\0') {
LAB_0025b48c:
    if (*piVar2 != 0) {
LAB_0025b498:
      iVar5 = *piVar2;
      uVar7 = (uint)*(char *)(iVar5 + 0x48);
      if ((uVar7 != 8 && uVar7 != 0x26) &&
         (*(char *)(iVar5 + 0x18) != '\b' && *(char *)(iVar5 + 0x18) != '&')) {
        piVar6 = (int *)func_00582260(*DAT_0025b5a0,uVar7,*(uint *)(iVar5 + 0x4c));
        if (*piVar6 != 0xb) {
          if (param_1[0xf] == 0x1a) {
            if (*(char *)(*piVar1 + 0x81) != '\0') {
              func_004EB9F4(*piVar1);
            }
            goto LAB_0025b570;
          }
          if (param_1[0xf] != *piVar6) {
            func_004EAC54(*piVar1,2);
            goto LAB_0025b570;
          }
          iVar5 = *piVar2;
          uVar7 = (uint)*(byte *)(iVar5 + 0x18);
          bVar4 = uVar7 == 1;
          if (bVar4) {
            uVar7 = *(uint *)(iVar5 + 0x1c);
          }
          bVar8 = bVar4 && uVar7 == 0x1e;
          if (bVar4 && uVar7 == 0x1e) {
            bVar8 = *(short *)(iVar5 + 0x20) == 2;
          }
          if (!bVar8) goto LAB_0025b570;
        }
        func_004EAC54(*piVar1,1);
        goto LAB_0025b570;
      }
    }
  }
  else {
    param_1[0x11] = 0xffffffff;
    param_1[0x12] = 0xffffffff;
    param_1[0x13] = 0xffffffff;
    param_1[0x14] = 0xffffffff;
    *(undefined1 *)((int)param_1 + 0xd9) = 0;
    *(undefined1 *)((int)param_1 + 0xda) = 0;
    uVar3 = DAT_0025b598;
    iVar5 = DAT_0025b594;
    if (*piVar2 != 0) {
      if (*(char *)(*piVar2 + 0x48) == '\x15') {
        if ((*DAT_0025b590 == 0) || (bVar4 = func_00584B94(*DAT_0025b590,DAT_0025b59c), !bVar4)) {
          local_1c = *(undefined4 *)(iVar5 + 0x48);
          local_20 = uVar3;
          func_00297138(*piVar1,&local_20);
        }
        else {
          local_1c = *(undefined4 *)(iVar5 + 0x4c);
          local_20 = uVar3;
          func_00297138(*piVar1,&local_20);
        }
        goto LAB_0025b48c;
      }
      goto LAB_0025b498;
    }
  }
  func_004EB9F4(*piVar1);
LAB_0025b570:
  return func_0010BB50(param_1,0);
}

