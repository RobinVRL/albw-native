#include "ghidra_types.h"

extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern undefined4 DAT_004c4fb8;
extern char s_ActorAdditionalHeap_004c4fbc[];

// USA 004C4F6C <- EU 004C4F44 (Ghidra, non-matching)
// GLOBAL DAT_004c4fb8 undefined4
// GLOBAL s_ActorAdditionalHeap_004c4fbc string

void func_004C4F6C(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*param_2 == 0) {
    local_10 = DAT_004c4fb8;
    local_c = s_ActorAdditionalHeap_004c4fbc;
    if (param_3 == 0) {
      piVar1 = func_004A107C(0,(int)&local_10,*(int **)(param_1 + 0x24),1,0);
      *param_2 = (int)piVar1;
      return;
    }
    piVar1 = func_004A107C(0,(int)&local_10,*(int **)(param_1 + 0x18),1,0);
    *param_2 = (int)piVar1;
  }
  return;
}

