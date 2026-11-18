#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00316774;
extern char s_SE_EnemyFireBall_DISAPPEAR_00316778[];
extern char s_SE_EnemyIceBall_DISAPPEAR_00316794[];

// USA 00316714 <- EU 003166F0 (Ghidra, non-matching)
// GLOBAL DAT_00316774 int
// GLOBAL s_SE_EnemyFireBall_DISAPPEAR_00316778 string
// GLOBAL s_SE_EnemyIceBall_DISAPPEAR_00316794 string

undefined4 func_00316714(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1[0x10d] + 0x61) = 0;
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  switch(param_1[0x11f]) {
  case 0:
  case 2:
  case 4:
    local_10 = DAT_00316774;
    local_c = s_SE_EnemyFireBall_DISAPPEAR_00316778;
    func_00150A84(param_1,&local_10,0);
    break;
  case 1:
  case 3:
    local_10 = DAT_00316774;
    local_c = s_SE_EnemyIceBall_DISAPPEAR_00316794;
    return func_00150A84(param_1,&local_10,0);
  }
  return 0;
}

