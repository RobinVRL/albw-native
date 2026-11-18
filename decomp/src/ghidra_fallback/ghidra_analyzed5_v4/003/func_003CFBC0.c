#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003CEAF8(int param_1);
extern int func_003CEBE4(void);
extern int func_003CECD4(int *param_1,uint *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_003CFDB4(int *param_1,int param_2);
extern int func_003D0040(int *param_1);
extern int func_003D35F8(undefined4 *param_1);
extern int func_00563ED4(int *param_1,undefined4 *param_2,int param_3);
extern int func_00564398(int *param_1,uint *param_2);
extern int *DAT_003cfd7c;
extern undefined1 *DAT_003cfd80;
extern int DAT_003cfd84;

// USA 003CFBC0 <- EU 003CFB9C (Ghidra, non-matching)
// GLOBAL DAT_003cfd7c int *
// GLOBAL DAT_003cfd80 undefined1 *
// GLOBAL DAT_003cfd84 int

int func_003CFBC0(int *param_1,int param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0xa0]; /* entry_sp - 0xa0 .. entry_sp + 0x0 */
#define stack0xffffff60 (*(undefined4 *)(albw_frame + 0x0))
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  #define abStack_98 ((byte *)(albw_frame + 0x8))
  #define local_90 (*(int *)(albw_frame + 0x10))
  #define local_38 ((uint *)(albw_frame + 0x68))
  #define local_30 (*(int *)(albw_frame + 0x70))
  #define iStack_2c (*(int *)(albw_frame + 0x74))
  #define iStack_28 (*(int *)(albw_frame + 0x78))
  piVar2 = DAT_003cfd7c;
  func_0010C0C0(DAT_003cfd7c);
  func_003CEBE4();
  puVar3 = DAT_003cfd80;
  DAT_003cfd80[1] = 1;
  param_1[1] = param_2;
  iVar4 = func_00563ED4(param_1,(undefined4 *)abStack_98,param_2);
  if (iVar4 < 0) {
    param_1[1] = 0;
    func_003CFDB4(param_1,1);
    if (puVar3[1] != '\0') {
      func_003CEAF8(0);
    }
    func_0010C160(piVar2);
    return iVar4;
  }
  if (local_90 == param_3) {
    *(undefined1 *)((int)param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    func_00110D44(param_1 + 0x67,abStack_98,0x60);
    iVar4 = func_003CECD4(param_1,(uint *)(param_1 + 0x7f),(int)(param_1 + 0x87),param_1[0xea],0);
    if (iVar4 < 0) {
      param_1[1] = 0;
      func_003CFDB4(param_1,1);
      cVar1 = puVar3[1];
    }
    else {
      uVar5 = 1;
      iVar4 = func_003CECD4(param_1,(uint *)(param_1 + 0xeb),(int)(param_1 + 0xf3),param_1[0x156],1)
      ;
      if (-1 < iVar4) {
        func_003D0040(param_1);
        *(undefined1 *)(param_1 + 0x77) = 0;
        *(undefined1 *)((int)param_1 + 0x1dd) = 0;
        func_003D35F8((undefined4 *)&stack0xffffff60);
        local_38[0] = uVar5;
        func_00564398(&local_30,local_38);
        param_1[0x74] = local_30;
        param_1[0x75] = iStack_2c;
        param_1[0x76] = iStack_28;
        *puVar3 = 1;
        func_0010C160(piVar2);
        return 0;
      }
      param_1[1] = 0;
      func_003CFDB4(param_1,1);
      cVar1 = puVar3[1];
    }
    if (cVar1 != '\0') {
      func_003CEAF8(0);
    }
    func_0010C160(piVar2);
    return iVar4;
  }
  param_1[1] = 0;
  func_003CFDB4(param_1,1);
  if (puVar3[1] != '\0') {
    func_003CEAF8(0);
  }
  iVar4 = DAT_003cfd84;
  func_0010C160(piVar2);
  return iVar4;
}

