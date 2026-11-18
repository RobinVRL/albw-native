#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_004B759C(int param_1);
extern int func_004B79BC(int param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int *DAT_004b0ae4;
extern undefined4 DAT_004b0ae8;
extern int *DAT_004b0b10;
extern char s_DemoCommandHeap_004b0aec[];
extern char s_DemoWaitCommandHeap_004b0afc[];

// USA 004B0A0C <- EU 004B09E4 (Ghidra, non-matching)
// GLOBAL DAT_004b0ae4 int *
// GLOBAL DAT_004b0ae8 undefined4
// GLOBAL DAT_004b0b10 int *
// GLOBAL s_DemoCommandHeap_004b0aec string
// GLOBAL s_DemoWaitCommandHeap_004b0afc string

void func_004B0A0C(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar2 = DAT_004b0ae4;
  *(undefined1 *)(param_1 + 0x23c4) = 2;
  uVar3 = DAT_004b0ae8;
  iVar4 = *piVar2;
  if ((iVar4 != 0) && (cVar1 = *(char *)(iVar4 + 0x18), cVar1 == '\b' || cVar1 == '&')) {
    if (*(int *)(param_1 + 0x20) == 0) {
      local_1c = s_DemoCommandHeap_004b0aec;
      local_20 = DAT_004b0ae8;
      piVar5 = func_0010B954(0x10800,(int)&local_20,(int *)0x0,1,0);
      *(int **)(param_1 + 0x20) = piVar5;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      local_1c = s_DemoWaitCommandHeap_004b0afc;
      local_20 = uVar3;
      piVar5 = func_0010B954(0x460,(int)&local_20,(int *)0x0,1,0);
      *(int **)(param_1 + 0x24) = piVar5;
    }
    func_004B759C(param_1);
    iVar4 = *piVar2;
    iVar6 = func_00582260(*DAT_004b0b10,(int)*(char *)(iVar4 + 0x18),*(uint *)(iVar4 + 0x1c));
    func_00689894(param_1 + 0x68,(int *)(iVar6 + 4),0xffffffff);
    if (*(char *)(iVar4 + 0x18) == '\b') {
      *(undefined4 *)(param_1 + 0x23fc) = *(undefined4 *)(iVar4 + 0x1c);
    }
    func_004B79BC(param_1);
    *(undefined1 *)(param_1 + 0x23c4) = 0;
  }
  return;
}

