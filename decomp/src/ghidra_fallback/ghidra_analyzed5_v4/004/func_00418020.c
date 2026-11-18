#include "ghidra_types.h"

extern int func_003DD48C(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_003DD770(float fparam_0);
extern int func_003DE120(void);
extern int func_003DE198(int param_1,int param_2,undefined4 param_3);
extern int DAT_004180e4;
extern float DAT_004180e8;

// USA 00418020 <- EU 00418000 (Ghidra, non-matching)
// GLOBAL DAT_004180e4 int
// GLOBAL DAT_004180e8 float

void func_00418020(char *param_1)

{
  char *pcVar1;
  float fparam_0;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == '\0') {
    iVar5 = 0;
    do {
      func_003DD48C((int)(char)iVar5,(undefined4 *)(param_1 + iVar5 * 4 + 0x6c),
                    (undefined4 *)(param_1 + iVar5 * 4 + 0x274));
      func_003DE198((int)(char)iVar5,0,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar3 = 0;
    iVar5 = 0;
    do {
      iVar4 = iVar3 + 1;
      iVar5 = iVar5 + 2;
      pcVar1 = param_1 + iVar3 * 4 + 0x74;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      iVar3 = iVar3 + 2;
      pcVar1 = param_1 + iVar4 * 4 + 0x74;
      pcVar1[0] = '\0';
      fparam_0 = DAT_004180e8;
      iVar4 = DAT_004180e4;
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    } while (iVar5 < 0x80);
    *(int *)(param_1 + 0x78) = DAT_004180e4;
    *(int *)(param_1 + 0x7c) = iVar4 + 4;
    *(int *)(param_1 + 0x80) = iVar4 + 8;
    *(int *)(param_1 + 0x84) = iVar4 + 0xc;
    *(int *)(param_1 + 0x88) = iVar4 + 0x10;
    func_003DD770(fparam_0);
    cVar2 = func_003DE120();
    if (cVar2 == '\0') {
      param_1[1] = '\0';
    }
    else if (cVar2 == '\x01') {
      param_1[1] = '\x01';
    }
    else if (cVar2 == '\x02') {
      param_1[1] = '\x02';
    }
    *param_1 = '\x01';
  }
  return;
}

