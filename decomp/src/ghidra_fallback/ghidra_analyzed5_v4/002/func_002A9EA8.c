#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001258CC(int param_1);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005427C4(int param_1,int param_2);
extern int func_0058A1F4(int param_1);
extern float DAT_002aa050;
extern int *DAT_002aa054;
extern int *DAT_002aa058;
extern uint *DAT_002aa05c;
extern undefined4 *DAT_002aa060;
extern undefined4 DAT_002aa064;

// USA 002A9EA8 <- EU 002A9E84 (Ghidra, non-matching)
// GLOBAL DAT_002aa050 float
// GLOBAL DAT_002aa054 int *
// GLOBAL DAT_002aa058 int *
// GLOBAL DAT_002aa05c uint *
// GLOBAL DAT_002aa060 undefined4 *
// GLOBAL DAT_002aa064 undefined4

undefined4 func_002A9EA8(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_3 + 0x24);
  uVar4 = func_0058A1F4(param_1);
  if (uVar4 == 0) {
    if ((((cVar1 == '\0' || cVar1 == '\x05') || (cVar1 == '\x06' || cVar1 == '\a')) ||
        (cVar1 == '\b' || cVar1 == '\t')) ||
       ((cVar1 == '\n' || cVar1 == '\r' || (cVar1 == '\x0e' || cVar1 == '\x0f'))))
    goto LAB_002a9f38;
    cVar2 = *(char *)(param_3 + 0x24);
    if (cVar2 == '\x03') {
      if (*(char *)(param_3 + 0x25) == '\x02') goto LAB_002a9f38;
    }
    else if ((cVar2 == '\v' || cVar2 == '\t') || cVar2 == '\n') goto LAB_002a9f38;
  }
  if (param_2 != 3) {
    if (cVar1 != '\x02') {
      func_004FC218(param_1,'\x04',0,0x7fff);
      return 0xe;
    }
    *(undefined1 *)(param_1 + 0x895) = 5;
    func_002AFEC4(param_1,-1,-1);
    bVar3 = func_005427C4(param_1,0);
    if (bVar3) {
      puVar5 = (undefined4 *)func_0052FBA0(*DAT_002aa058 + 0x3dbbc,*(uint *)(param_1 + 0x8e0));
      if (puVar5 != (undefined4 *)0x0) {
        if (((*DAT_002aa05c & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002aa05c), iVar6 != 0))
        {
          *DAT_002aa060 = DAT_002aa064;
        }
        iVar6 = (**(code **)*puVar5)(puVar5,DAT_002aa060);
        if (iVar6 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar5 != (undefined4 *)0x0) {
          func_001258CC((int)puVar5);
        }
      }
      *(undefined1 *)(param_1 + 0x8ff) = 1;
    }
    return 0x13;
  }
LAB_002a9f38:
  func_004FC218(param_1,'\x03',0,0x7fff);
  if (cVar1 == '\x05') {
    func_002917A4(*DAT_002aa054,param_1 + 0x3d0,0,DAT_002aa050);
  }
  else if (cVar1 == '\b') {
    func_00291A38(*DAT_002aa054,param_1 + 0x3d0,DAT_002aa050);
  }
  return 0xe;
}

