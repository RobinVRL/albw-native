#include "ghidra_types.h"

extern int func_005382AC(undefined4 param_1,int *param_2,char *param_3,int param_4);
extern int func_00540368(int param_1,uint param_2);
extern int func_00540A70(int param_1,int *param_2);
extern int *DAT_005380ac;
extern int DAT_005380b0;
extern int *DAT_005380b4;

// USA 00537F54 <- EU 00537F2C (Ghidra, non-matching)
// GLOBAL DAT_005380ac int *
// GLOBAL DAT_005380b0 int
// GLOBAL DAT_005380b4 int *

undefined4 func_00537F54(int param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_1d (*(undefined1 *)(albw_frame + 0x53))
  if (*(char *)(*DAT_005380ac + 0x25) == '\x03' || *(char *)(*DAT_005380ac + 0x25) == '\x02') {
    return 1;
  }
  local_64 = local_5c;
  uStack_60 = 0x40;
  uStack_1d = 0;
  local_68 = DAT_005380b0;
  local_5c[0] = 0;
  iVar3 = func_005382AC(param_1,&local_68,(char *)param_2,1);
  piVar2 = DAT_005380b4;
  bVar1 = *param_2;
  uVar5 = (uint)(char)bVar1;
  iVar4 = func_00540368(*DAT_005380b4,1);
  if (((iVar4 == 0) || (uVar5 != 2)) &&
     ((iVar4 = func_00540368(*piVar2,2), iVar4 == 0 || (uVar5 != 3)))) {
    if (iVar3 == 0) goto LAB_00538054;
  }
  else if (iVar3 == 0) {
    return 1;
  }
  iVar3 = func_00540368(*piVar2,4);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = func_00540368(*piVar2,0x10);
  if ((iVar3 != 0) && (iVar3 = func_00540368(*piVar2,0x20), iVar3 == 0)) {
    return 0;
  }
  iVar3 = func_00540A70(*piVar2,&local_68);
  if (iVar3 != 0) {
    return 1;
  }
LAB_00538054:
  if (0x3f < uVar5) {
    return 0;
  }
  if ((int)uVar5 < 0x40) {
    if ((int)uVar5 < 0x20) {
      if ((*(uint *)(param_1 + 0x58) & 1 << (uint)bVar1) != 0) {
        return 1;
      }
      return 0;
    }
    uVar5 = *(uint *)(param_1 + 0x5c) & 1 << (uVar5 - 0x20 & 0xff);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x60) & 1 << (uVar5 - 0x40 & 0xff);
  }
  if (uVar5 != 0) {
    return 1;
  }
  return 0;
}

