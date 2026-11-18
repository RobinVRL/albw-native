#include "ghidra_types.h"

extern int func_003DD93C(void);
extern int func_003DECE8(int param_1,int param_2,ushort *param_3);
extern int func_003DEE98(int param_1,int param_2,ushort *param_3);
extern int DAT_003dd918;

// USA 003DD78C <- EU 003DD76C (Ghidra, non-matching)
// GLOBAL DAT_003dd918 int

/* WARNING: Removing unreachable block (ram,0x003dd860) */
/* WARNING: Removing unreachable block (ram,0x003dd7f4) */
/* WARNING: Removing unreachable block (ram,0x003dd824) */
/* WARNING: Removing unreachable block (ram,0x003dd8d4) */

void func_003DD78C(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define auStack_50 ((ushort *)(albw_frame + 0x0))
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  iVar1 = func_003DD93C();
  iVar3 = 0;
  do {
    iVar2 = (int)(char)iVar3;
    auStack_50[1] = 0;
    auStack_50[0] = 1;
    *(undefined2 *)(iVar1 + iVar2 * 0x14 + 2) = 0;
    func_003DECE8(DAT_003dd918,iVar2,auStack_50);
    auStack_50[1] = 0;
    auStack_50[0] = 1;
    *(undefined2 *)(iVar1 + iVar2 * 0x34 + 0x2a) = 0;
    func_003DEE98(DAT_003dd918,iVar2,auStack_50);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}

