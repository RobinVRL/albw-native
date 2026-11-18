#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_006824D4(int *param_1,float *param_2,undefined4 *param_3,float *param_4);

// USA 00140A60 <- EU 00140A60 (Ghidra, non-matching)

undefined4 func_00140A60(void)

{
  _Alignas(8) unsigned char albw_frame[0x60]; /* entry_sp - 0x0 .. entry_sp + 0x60 */
#define stack0x00000018 (*(undefined4 *)(albw_frame + 0x18))
  int unaff_r4;
  float *unaff_r7;
  float *unaff_r8;
  undefined4 *unaff_r9;
  
  func_00115C54((float *)(unaff_r4 + 0x3d0),(float *)(unaff_r4 + 0x3d0),(float *)&stack0x00000018);
  func_00115C54((float *)(unaff_r4 + 0x3d0),(float *)(unaff_r4 + 0x3d0),unaff_r7);
  return func_006824D4(*(int **)(unaff_r4 + 0x41c),unaff_r8,unaff_r9,(float *)(unaff_r4 + 0x3d0));
}

