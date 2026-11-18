#include "ghidra_types.h"

extern int func_0016B8DC(int param_1,undefined4 param_2,int param_3);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00276664(int param_1,int param_2,int param_3);
extern int func_002E1B70(int *param_1);
extern int func_002FD2CC(int param_1);
extern int func_0053B3E8(int param_1,int *param_2,float *param_3);
extern int *DAT_002fdfa8;
extern int *DAT_002fdfac;
extern int *DAT_002fdfb0;
extern int *DAT_002fdfb4;

// USA 002FDE84 <- EU 002FDE60 (Ghidra, non-matching)
// GLOBAL DAT_002fdfa8 int *
// GLOBAL DAT_002fdfac int *
// GLOBAL DAT_002fdfb0 int *
// GLOBAL DAT_002fdfb4 int *

undefined4 func_002FDE84(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 *puVar6;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  piVar3 = DAT_002fdfa8;
  cVar1 = *(char *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x78) + 1;
  *(int *)(param_1 + 0x78) = iVar5;
  if (*(char *)(param_1 + 0x7d) == '\0') {
    puVar6 = (undefined4 *)0x0;
    local_18 = in_r3;
    if (cVar1 == '\x02') {
      if (*DAT_002fdfac != 0) {
        local_18 = 0;
        iVar5 = *(int *)(*DAT_002fdfac + 0x38);
        if (iVar5 != 0) {
          func_0053B3E8(iVar5,&local_18,*(float **)(*DAT_002fdfb0 + 0x1c));
          if (*(int *)(param_1 + 0x74) < 0) {
            *(int *)(param_1 + 0x74) = local_18;
          }
          if (*(int *)(param_1 + 0x70) == local_18) {
            func_00276664(iVar5,local_18,*(int *)(param_1 + 0x74));
          }
        }
      }
      func_002FD2CC(param_1);
      puVar6 = (undefined4 *)(param_1 + 0x38);
      func_001E8268(*(int *)(*piVar3 + 0x18),(int *)(param_1 + 0x30),puVar6,
                    (undefined4 *)(param_1 + 0x44));
      iVar5 = extraout_r1;
    }
    if (*(int *)(param_1 + 0x78) == 0xf) {
      func_0016B8DC(*DAT_002fdfb4,iVar5,(int)puVar6);
    }
    return 0;
  }
  if ((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') {
    bVar2 = false;
    if (*(char *)(param_1 + 0x7e) != '\0') {
      *(undefined1 *)(param_1 + 0x7e) = 0;
      iVar5 = func_002E1B70((int *)(param_1 + 0x30));
      if (iVar5 != 0) {
        bVar2 = true;
      }
    }
    iVar4 = *piVar3;
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + 0x18);
    }
    if ((iVar4 != 0 && iVar5 != 0) && (!bVar2)) {
      return 0;
    }
  }
  return 1;
}

