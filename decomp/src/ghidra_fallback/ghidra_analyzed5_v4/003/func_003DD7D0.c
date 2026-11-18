#include "ghidra_types.h"

extern int func_003DECE8(int param_1,int param_2,ushort *param_3);
extern int func_003DEE98(int param_1,int param_2,ushort *param_3);
extern int DAT_003dd918;

// USA 003DD7D0 <- EU 003DD7B0 (Ghidra, non-matching)
// GLOBAL DAT_003dd918 int

/* WARNING: Removing unreachable block (ram,0x003dd860) */
/* WARNING: Removing unreachable block (ram,0x003dd7f4) */
/* WARNING: Removing unreachable block (ram,0x003dd824) */
/* WARNING: Removing unreachable block (ram,0x003dd8d4) */

void func_003DD7D0(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 ((ushort *)(albw_frame + 0x0))
  iVar2 = 0;
  do {
    iVar1 = (int)(char)iVar2;
    local_50[1] = 0;
    local_50[0] = 1;
    *(undefined2 *)(param_1 + iVar1 * 0x14 + 2) = 0;
    func_003DECE8(DAT_003dd918,iVar1,local_50);
    local_50[1] = 0;
    local_50[0] = 1;
    *(undefined2 *)(param_1 + iVar1 * 0x34 + 0x2a) = 0;
    func_003DEE98(DAT_003dd918,iVar1,local_50);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}

