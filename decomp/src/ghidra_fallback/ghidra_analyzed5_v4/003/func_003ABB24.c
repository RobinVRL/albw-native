#include "ghidra_types.h"

extern int func_002D3B08(int param_1);
extern int func_002D3B54(int param_1);
extern int func_002D3B74(int param_1);
extern int func_002D3B94(int param_1);
extern int func_002D3BB4(int param_1);
extern int func_002D3BD4(int param_1);
extern int func_002D3BF4(int param_1);
extern int func_002D3C14(int param_1);
extern int func_002D3C34(int param_1);
extern int func_002D3C54(int param_1);
extern int func_003A2C34(uint param_1,undefined4 param_2);
extern int func_003A2FD4(byte *param_1,uint param_2);
extern int func_003AF388(int param_1);
extern int func_003B2718(int *param_1);
extern int func_003B39BC(int *param_1);
extern int func_003B4310(int *param_1);
extern int func_003B7744(int *param_1);
extern int func_003BA62C(int *param_1);
extern int func_003BD5AC(int *param_1);
extern int func_003BE0B8(int *param_1);
extern int func_003BE8BC(int *param_1);
extern int func_003BF8F0(int *param_1);
extern int func_003C0B38(int *param_1);
extern int func_003C15FC(int *param_1);
extern int func_003C42E4(int *param_1);
extern int func_003C506C(int *param_1);
extern int func_00429368(int *param_1);
extern int func_00543170(int param_1);
extern int func_005462AC(int param_1);
extern int func_005462CC(int param_1);
extern int func_0054630C(int param_1);
extern int func_0054632C(int param_1);
extern int func_0054634C(int param_1);
extern int func_0054636C(int param_1);
extern int func_0054638C(int param_1);
extern int func_005463AC(int param_1);
extern int func_005463CC(int param_1);
extern int func_005463EC(int param_1);

// USA 003ABB24 <- EU 003ABB00 (Ghidra, non-matching)

undefined4 func_003ABB24(int *param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (((param_3 == 0) && (param_1[1] != 0)) && (*(char *)(param_1[1] + 0x62) == '\0')) {
    return 0;
  }
  if (param_2 == 0x19) {
    return 0;
  }
  cVar2 = func_003A2C34(*param_1 + 0xbc8,param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar4 = func_00543170(*param_1);
  if ((iVar4 != 0) && (param_2 == 2)) {
    return 0;
  }
  uVar1 = (undefined1)param_2;
  switch(param_2) {
  case 1:
    if ((int *)param_1[1] == param_1 + 2) {
      return 0;
    }
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 2);
    func_003BA62C(param_1 + 2);
    break;
  case 2:
    if ((int *)param_1[1] == param_1 + 0x2a) {
      return 0;
    }
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 0x2a);
    func_003BF8F0(param_1 + 0x2a);
    break;
  case 3:
    if ((int *)param_1[1] == param_1 + 0x51) {
      return 0;
    }
    bVar3 = func_0054630C(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    func_002D3B74(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 0x51);
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_003B7744(param_1 + 0x51);
    break;
  case 4:
    if ((int *)param_1[1] == param_1 + 0x75) {
      return 0;
    }
    iVar4 = func_003AF388(*param_1 + 0xed4);
    if (iVar4 == 0) {
      return 0;
    }
    bVar3 = func_005463EC(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    func_002D3C54(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 0x75);
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_003C506C(param_1 + 0x75);
    break;
  case 5:
    bVar3 = func_005462AC(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    piVar5 = param_1 + 0x14f;
    if ((int *)param_1[1] == piVar5) {
      return 0;
    }
    if (*(int *)(*param_1 + 0xb10) != 0) {
      return 0;
    }
    param_1[0x173] = 0;
    func_002D3B08(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)piVar5;
    func_003B2718(piVar5);
    break;
  case 6:
    if ((int *)param_1[1] == param_1 + 0x99) {
      return 0;
    }
    bVar3 = func_0054634C(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    func_002D3BB4(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 0x99);
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_003C0B38(param_1 + 0x99);
    break;
  case 7:
    if ((int *)param_1[1] == param_1 + 0xbd) {
      return 0;
    }
    bVar3 = func_0054638C(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    func_002D3BF4(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 0xbd);
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_003BE0B8(param_1 + 0xbd);
    break;
  case 8:
    piVar5 = param_1 + 0x106;
    if ((int *)param_1[1] == piVar5) {
      return 0;
    }
    bVar3 = func_005463AC(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    func_002D3C14(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)piVar5;
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_003C15FC(piVar5);
    break;
  case 9:
    if ((int *)param_1[1] == param_1 + 0xe1) {
      return 0;
    }
    bVar3 = func_0054632C(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    func_002D3B94(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 0xe1);
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_00429368(param_1 + 0xe1);
    break;
  case 10:
    piVar5 = param_1 + 0x12a;
    if ((int *)param_1[1] == piVar5) {
      return 0;
    }
    bVar3 = func_005462CC(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    func_002D3B54(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)piVar5;
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_003BD5AC(piVar5);
    break;
  case 0xb:
    if ((int *)param_1[1] == param_1 + 0x174) {
      return 0;
    }
    bVar3 = func_005463CC(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    func_002D3C34(*param_1 + 0xa6c);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 0x174);
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_003C42E4(param_1 + 0x174);
    break;
  case 0xc:
    if ((int *)param_1[1] == param_1 + 0x198) {
      return 0;
    }
    func_003A2FD4((byte *)(*param_1 + 0xbc8),1);
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xe0))((int *)param_1[1]);
    }
    param_1[1] = (int)(param_1 + 0x198);
    func_003B39BC(param_1 + 0x198);
    break;
  case 0xd:
    piVar5 = (int *)param_1[1];
    piVar6 = param_1 + 0x1bd;
    if (piVar5 == piVar6) {
      return 0;
    }
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xe0))(piVar5);
    }
    param_1[1] = (int)piVar6;
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    func_003BE8BC(piVar6);
    break;
  case 0xe:
    bVar3 = func_0054636C(*param_1 + 0xa6c);
    if (!bVar3) {
      return 0;
    }
    if ((int *)param_1[1] == param_1 + 0x1e2) {
      return 0;
    }
    func_002D3BD4(*param_1 + 0xa6c);
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    piVar5 = (int *)param_1[1];
    *(undefined1 *)(param_1 + 0x206) = uVar1;
    goto joined_r0x003ac2d0;
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    if ((int *)param_1[1] == param_1 + 0x1e2) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x206) = uVar1;
    func_003A2FD4((byte *)(*param_1 + 0xbc8),param_2);
    piVar5 = (int *)param_1[1];
joined_r0x003ac2d0:
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xe0))(piVar5);
    }
    param_1[1] = (int)(param_1 + 0x1e2);
    func_003B4310(param_1 + 0x1e2);
  }
  *(undefined1 *)(param_1 + 0x207) = uVar1;
  return 1;
}

