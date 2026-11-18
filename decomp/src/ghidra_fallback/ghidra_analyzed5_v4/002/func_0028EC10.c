#include "ghidra_types.h"

extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern uint DAT_0028ed94;
extern int *DAT_0028ed98;
extern char s_SE_PL_EVENT_SWORD_UP_0028ed7c[];

// USA 0028EC10 <- EU 0028EC38 (Ghidra, non-matching)
// GLOBAL DAT_0028ed94 uint
// GLOBAL DAT_0028ed98 int *
// GLOBAL s_SE_PL_EVENT_SWORD_UP_0028ed7c string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

undefined4 func_0028EC10(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  iVar5 = *(int *)(param_1 + 0x4c);
  if ((((*(uint *)(*(int *)(param_1 + 0x50) + 0x328) & 0x80) == 0) ||
      (*(char *)(*(int *)(param_1 + 0x50) + 0x33c) != '\f')) && (*(short *)(iVar5 + 0x52) != 0x71))
  {
    if (*(int *)(param_1 + 0x70) == 0) {
      return 0;
    }
    cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0x70) + 0x30) + 0xe8);
    if (cVar1 != '\0') {
      if (cVar1 != '\x03') {
        return 0;
      }
      objStack_18[0] = 6;
      func_0028D580((uint *)(iVar5 + 0x3c),0x73,1,1,6);
      piVar4 = (int *)0x1;
      objStack_18[0] = 6;
      uVar3 = 1;
      func_0028D580((uint *)(iVar5 + 0x5c),0x73,1,1,6);
      if (param_2 != 0) {
        objStack_18[1] = (uint)s_SE_PL_EVENT_SWORD_UP_0028ed7c;
        objStack_18[0] = DAT_0028ed94;
        uVar3 = 0;
        func_004EA104(*DAT_0028ed98,(int *)objStack_18,0);
      }
      return func_0028C8EC(*(int *)(param_1 + 0x4c),3,uVar3,piVar4);
    }
    objStack_18[0] = 6;
    func_0028D580((uint *)(iVar5 + 0x3c),0x70,1,1,6);
    iVar2 = 0x70;
  }
  else {
    objStack_18[0] = 6;
    func_0028D580((uint *)(iVar5 + 0x3c),0x71,1,1,6);
    iVar2 = 0x71;
  }
  objStack_18[0] = 6;
  return func_0028D580((uint *)(iVar5 + 0x5c),iVar2,1,1,6);
}

