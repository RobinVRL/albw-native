#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_003CD8E0(int param_1);
extern int func_0049D774(int param_1,int *param_2);
extern int func_0049DC40(int param_1,byte *param_2,int param_3);
extern undefined4 DAT_0048e080;

// USA 0048DD08 <- EU 0048DCE0 (Ghidra, non-matching)
// GLOBAL DAT_0048e080 undefined4

undefined4 func_0048DD08(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *unaff_r5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c ((undefined4 *)(albw_frame + 0x14))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined1 *)(albw_frame + 0x24))
  uVar2 = DAT_0048e080;
  cVar1 = *(char *)((int)param_1 + 0x1e9);
  if (cVar1 == '\x01') {
    if (param_1[0x76] < param_1[0x75]) {
      iVar4 = param_1[0x17];
      param_1[0x75] = param_1[0x76] + 1;
      iVar3 = func_003CD8E0(iVar4 + 4);
      if (iVar3 != 0) {
        local_2c[0] = 3;
        (**(code **)(*param_1 + 0x5c))(param_1,local_2c);
        *(undefined1 *)((int)param_1 + 0x1e9) = 2;
        cVar1 = (char)param_1[0x1b];
        if (cVar1 == '\x01') {
          iVar3 = param_1[0x17];
          func_0010C0B8(iVar3 + 4);
          if ((char)param_1[0x1b] == '\x01') {
            func_0049D774(param_1[0x17],(int *)param_1[0x1c]);
            param_1[0x1c] = 0;
          }
          func_0049DC40(param_1[0x17],(byte *)(param_1 + 0x1d),(int)(param_1 + 0x3e));
          func_0010EEE0(iVar3 + 4);
        }
        else if (cVar1 == '\x02') {
          (**(code **)(*(int *)param_1[0x1c] + 0x10))((int *)param_1[0x1c],1);
          (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],1);
          (**(code **)(*(int *)param_1[0x3d] + 0x10))((int *)param_1[0x3d],0);
          (**(code **)(*(int *)param_1[0x3d] + 0x14))((int *)param_1[0x3d],0);
          local_38 = uVar2;
          (*(undefined1 *)((char *)&local_34 + 0)) = 1;
          (**(code **)(*(int *)param_1[0x1c] + 0x38))((int *)param_1[0x1c],&local_38);
          local_38 = uVar2;
          local_34 = CONCAT31((*(undefined4 *)((char *)&local_34 + 1) & 0xFFFFFF),2);
          (**(code **)(*(int *)param_1[0x3d] + 0x38))((int *)param_1[0x3d],&local_38);
          *(undefined1 *)(param_1 + 0x7a) = 1;
        }
        else if (cVar1 == '\x03') {
          (**(code **)(*(int *)param_1[0x1c] + 0x10))((int *)param_1[0x1c],1);
          (**(code **)(*(int *)param_1[0x1c] + 0x14))((int *)param_1[0x1c],1);
        }
        else if (cVar1 == '\x04') {
          piVar5 = (int *)param_1[0x1c];
          iVar3 = piVar5[4];
          if (iVar3 != 0) {
            unaff_r5 = *(int **)(iVar3 + 0x10);
          }
          if (iVar3 == 0) {
            unaff_r5 = (int *)0x0;
          }
          if (param_1[0x3d] == 0) {
            func_0049D774(param_1[0x17],piVar5);
          }
          else {
            func_0049D774(param_1[0x17],piVar5);
            if ((int *)param_1[0x3d] != unaff_r5) {
              do {
                func_0049D774(param_1[0x17],unaff_r5);
                iVar3 = unaff_r5[4];
                if (iVar3 != 0) {
                  unaff_r5 = *(int **)(iVar3 + 0x10);
                }
                if (iVar3 == 0) {
                  unaff_r5 = (int *)0x0;
                }
              } while ((int *)param_1[0x3d] != unaff_r5);
            }
          }
          (**(code **)(*unaff_r5 + 0x10))(unaff_r5,0);
          (**(code **)(*unaff_r5 + 0x14))(unaff_r5,0);
          local_20 = uVar2;
          local_1c = 0;
          (**(code **)(*unaff_r5 + 0x38))(unaff_r5,&local_20);
          *(undefined1 *)(param_1 + 0x7a) = 1;
        }
        return func_0010EEE0(iVar4 + 4);
      }
    }
  }
  else if (cVar1 == '\x02') {
    if ((param_1[0x77] < param_1[0x75]) &&
       (param_1[0x75] = param_1[0x77] + 1, (char)param_1[0x7a] != '\0')) {
      if ((char)param_1[0x1b] == '\x01') {
        local_38 = uVar2;
        local_34 = CONCAT31((*(undefined4 *)((char *)&local_34 + 1) & 0xFFFFFF),4);
        (**(code **)(*(int *)param_1[0x3d] + 0x38))((int *)param_1[0x3d],&local_38);
      }
      local_30 = 0;
      (**(code **)(*param_1 + 0x5c))(param_1,&local_30);
      *(undefined1 *)((int)param_1 + 0x1e9) = 3;
      return 0;
    }
  }
  else if ((cVar1 == '\x03') && (param_1[0x78] < param_1[0x75])) {
    local_34 = 1;
    (**(code **)(*param_1 + 0x5c))(param_1,&local_34);
    param_1[0x75] = param_1[0x78] + 1;
    *(undefined1 *)((int)param_1 + 0x1e9) = 0;
    (**(code **)(*param_1 + 0x44))(param_1);
    (**(code **)(*param_1 + 0x48))(param_1);
    iVar3 = param_1[0x1c];
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xfffffffe;
    }
    iVar3 = param_1[0x3d];
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x30) = *(uint *)(iVar3 + 0x30) & 0xfffffffe;
    }
  }
  return 0;
}

