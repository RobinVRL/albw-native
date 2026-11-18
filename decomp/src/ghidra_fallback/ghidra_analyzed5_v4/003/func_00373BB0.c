// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_00255C14(int param_1,int param_2);
extern int func_00255CC8(int param_1,int param_2);
extern int func_00255CF4(int param_1,int param_2);
extern int func_00374084(int param_1);
extern int func_00374174(int param_1);
extern int func_0051A974(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4);
extern int func_0051AE5C(int param_1);
extern int func_00556A38(int param_1);
extern int func_00556AE0(int param_1);
extern int func_00556AEC(int param_1);
extern int func_0058DCE4(int param_1);
extern int func_006534F0(int param_1,undefined *param_2,undefined4 param_3,int param_4);
extern int func_00653554(int param_1);
extern int func_00653584(int param_1);
extern int *DAT_00373ea8;
extern int *DAT_00373eac;

// USA 00373BB0 <- EU 00373B8C (Ghidra, non-matching)
// GLOBAL DAT_00373ea8 int *
// GLOBAL DAT_00373eac int *

uint func_00373BB0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *DAT_00373ea8;
  if (iVar6 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x9d1) != '\0') {
    switch(param_2) {
    case 0:
      func_006534F0(param_1,(undefined *)(uint)*(byte *)(param_1 + 0x9d0),param_3,param_4);
      return 1;
    case 1:
      bVar3 = func_00653554(param_1);
      return (uint)bVar3;
    case 2:
    case 3:
    case 6:
      return 1;
    case 4:
      iVar6 = func_00653584(param_1);
      if (iVar6 == 0) {
        return 0;
      }
      return 1;
    case 5:
      goto switchD_00373bb8_caseD_5;
    default:
      return 0;
    }
  }
  switch(param_2) {
  case 0:
    func_001DD484(iVar6,0x20,1);
    break;
  case 1:
switchD_00373c8c_caseD_1:
    *(undefined2 *)(param_1 + 0x9dc) = 0;
    break;
  case 2:
    if (*(ushort *)(param_1 + 0x9dc) == 0) {
      cVar1 = *(char *)(param_1 + 0x9e6);
      if (cVar1 == '\0') {
        bVar4 = func_00556A38(iVar6);
        func_00255C14(iVar6,(uint)bVar4);
      }
      else if (cVar1 == '\x01') {
        bVar4 = func_00556AEC(iVar6);
        func_00255CF4(iVar6,(uint)bVar4);
      }
      else if (cVar1 == '\x02') {
        bVar4 = func_00556AE0(iVar6);
        func_00255CC8(iVar6,(uint)bVar4);
      }
    }
    else if (0x3c < *(ushort *)(param_1 + 0x9dc)) goto switchD_00373c8c_caseD_1;
    *(short *)(param_1 + 0x9dc) = *(short *)(param_1 + 0x9dc) + 1;
switchD_00373bb8_default:
    return 0;
  case 3:
  case 9:
    func_00255B48(iVar6,(uint)*(ushort *)(param_1 + 0x9cc),param_3);
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x9e6) = 0;
    func_00374174(param_1);
    break;
  case 5:
    *(undefined1 *)(param_1 + 0x9e6) = 1;
    func_00374174(param_1);
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x9e6) = 2;
    func_00374174(param_1);
    break;
  case 7:
    if (*(char *)(param_1 + 0x9ea) == '\x01') {
      uVar5 = func_0058DCE4(*DAT_00373eac);
      return uVar5;
    }
    func_00374084(param_1);
    piVar2 = DAT_00373eac;
    func_0051A974(*DAT_00373eac,*(undefined2 *)(param_1 + 0x9e0),*(undefined2 *)(param_1 + 0x9e2),
                  *(undefined2 *)(param_1 + 0x9e4));
    func_0051AE5C(*piVar2);
    *(undefined1 *)(param_1 + 0x9ea) = 1;
    return 0;
  case 8:
    *(ushort *)(param_1 + 0x9cc) =
         *(short *)(param_1 + 0x9e4) * (ushort)*(byte *)(param_1 + 0x9e9) +
         *(short *)(param_1 + 0x9e2) * (ushort)*(byte *)(param_1 + 0x9e8) +
         *(short *)(param_1 + 0x9e0) * (ushort)*(byte *)(param_1 + 0x9e7);
    break;
  case 10:
    func_00255C14(iVar6,(uint)*(byte *)(param_1 + 0x9e7));
    func_00255CF4(iVar6,(uint)*(byte *)(param_1 + 0x9e8));
    func_00255CC8(iVar6,(uint)*(byte *)(param_1 + 0x9e9));
    break;
  default:
    goto switchD_00373bb8_default;
  }
  return 1;
switchD_00373bb8_caseD_5:
  cVar1 = *(char *)(param_1 + 0x9d0);
  if (cVar1 == '\0') {
    return 1;
  }
  if (cVar1 == '\x01') {
    func_00255C14(iVar6,10);
    return 1;
  }
  if (cVar1 == '\x02') {
    func_00255CF4(iVar6,10);
    return 1;
  }
  if (cVar1 == '\x03') {
    func_00255CC8(iVar6,10);
    return 1;
  }
  return 1;
}

