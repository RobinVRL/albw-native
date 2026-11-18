#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_004e50fc;
extern char s_SE_BombL_EXPLOSION_004e50e8[];

// GLOBAL DAT_004e50fc int
// GLOBAL s_SE_BombL_EXPLOSION_004e50e8 string
// USA 004E50D4 <- EU 004E50AC (Ghidra, function missing from the decomp table)

undefined4 func_004E50D4(void)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x0 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x0))
  int *unaff_r4;
  int iStack00000000;
  char *pcStack00000004;
  
  iStack00000000 = DAT_004e50fc;
  unaff_r4[0xb8] = unaff_r4[0xb8] | 2;
  pcStack00000004 = s_SE_BombL_EXPLOSION_004e50e8;
  return func_00150A84(unaff_r4,&stack0x00000000,0);
}

