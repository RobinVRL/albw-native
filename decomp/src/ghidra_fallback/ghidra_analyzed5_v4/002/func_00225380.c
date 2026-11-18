#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_00227500(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002254bc;
extern char s_PartsBomb_002254c0[];

// USA 00225380 <- EU 00225380 (Ghidra, non-matching)
// GLOBAL DAT_002254bc int *
// GLOBAL s_PartsBomb_002254c0 string

undefined4 func_00225380(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  uVar3 = 1;
  if (*(char *)(param_1 + 0x744) == '\0') {
    cVar1 = *(char *)(param_1 + 0x73c);
    iVar2 = *(int *)(param_1 + 0x6ec);
    if (cVar1 == '\x01') {
      iVar2 = *(int *)(param_1 + 0x6e8);
    }
    else if (cVar1 == '\x02') {
      iVar2 = *(int *)(param_1 + 0x6e4);
    }
    else if (cVar1 == '\x03') {
      iVar2 = *(int *)(param_1 + 0x6e0);
    }
    else if (cVar1 == '\x04') {
      iVar2 = *(int *)(param_1 + 0x6dc);
    }
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x24) + 0x14) + iVar2 * 0x30;
    local_30 = *(undefined4 *)(iVar2 + 0xc);
    local_2c = *(undefined4 *)(iVar2 + 0x1c);
    local_28 = *(undefined4 *)(iVar2 + 0x2c);
    if (*(int *)(param_1 + 0x344) == 0) {
      iStack_1c = 0;
      local_20 = 0;
    }
    else {
      func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)s_PartsBomb_002254c0);
    }
    if ((local_20 != 0) && (*(int *)(local_20 + 0x1c) == iStack_1c)) {
      func_004A2F38(local_20,&local_30);
    }
    *(undefined2 *)(param_1 + 0x740) = 0;
    func_0065E774((undefined4 *)(param_1 + 0x468),0x10);
  }
  else {
    uVar4 = func_00110710(*(uint *)(*DAT_002254bc + 0x10),6);
    if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
      uVar3 = (uint)(*(char *)(param_1 + 0x74b) == '\0');
    }
  }
  if ((int)*(char *)(param_1 + 0x74b) == uVar3) {
    return 0;
  }
  return func_00227500(param_1,uVar3);
}

