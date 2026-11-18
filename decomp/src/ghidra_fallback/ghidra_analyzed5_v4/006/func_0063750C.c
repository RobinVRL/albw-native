#include "ghidra_types.h"

extern int func_001E6A3C(int param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004C07D8(int param_1);
extern int func_00547538(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0063741C(int param_1,int param_2,undefined1 param_3);
extern int *DAT_00637698;

// USA 0063750C <- EU 006374E4 (Ghidra, non-matching)
// GLOBAL DAT_00637698 int *

undefined4 func_0063750C(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  
  if (*(short *)(param_1 + 0x30) != 1) {
    bVar2 = func_00588BF0(param_1,0);
    if ((!bVar2) || (bVar2 = func_00588BF0(param_1,1), bVar2)) {
      *(undefined1 *)(param_1 + 0x853) = 0;
      *(undefined1 *)(param_1 + 0x855) = 1;
      *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xffffffdf | 1;
    }
    else {
      if (*(short *)(param_1 + 0x32) == 0) {
        *(undefined1 *)(param_1 + 0x853) = 5;
        *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xfffffffe | 0x20;
      }
      else {
        *(undefined1 *)(param_1 + 0x853) = 6;
      }
      *(undefined1 *)(param_1 + 0x855) = 7;
    }
  }
  if ((*(char *)(param_1 + 0x992) == '\x03') && (bVar2 = func_00547538(param_1 + 4), bVar2)) {
    *(undefined4 *)(param_1 + 0x98c) = 0x80000000;
    *(undefined1 *)(param_1 + 0x853) = 5;
    *(undefined1 *)(param_1 + 0x855) = 7;
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xfffffffe | 0x20;
  }
  piVar1 = DAT_00637698;
  if (*(char *)(param_1 + 0x85d) != '\0') {
    if ((*(char *)(param_1 + 0x85a) == '\x03') && (*(char *)(param_1 + 0x858) != '\0')) {
      func_004A8304(*DAT_00637698,*(int *)(param_1 + 0x86c));
      func_004A879C(*piVar1,*(int *)(param_1 + 0x86c),3);
    }
    func_001E6A3C(param_1);
    *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x83c);
    func_004C07D8(param_1);
    *(undefined4 *)(param_1 + 0x810) = 0;
    *(undefined1 *)(param_1 + 0x85d) = 0;
    *(undefined2 *)(param_1 + 0x84c) = 0;
    *(undefined2 *)(param_1 + 0x84e) = 0;
    if ((*(char *)(param_1 + 0x964) == '\x02') &&
       (uVar3 = *(uint *)(param_1 + 0x8ac), (uVar3 & 0x20) != 0)) {
      bVar2 = (uVar3 & 0x10) == 0;
      if (bVar2) {
        uVar3 = (uint)*(byte *)(param_1 + 0x857);
      }
      if (bVar2 && uVar3 == 0) {
        return func_0063741C(param_1,3,0);
      }
    }
    func_0063741C(param_1,*(int *)(param_1 + 0x984),0);
  }
  return 0;
}

