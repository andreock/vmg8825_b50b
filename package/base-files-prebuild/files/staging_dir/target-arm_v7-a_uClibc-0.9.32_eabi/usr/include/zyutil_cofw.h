#ifndef _ZYUTIL_COFW_H
#define _ZYUTIL_COFW_H

typedef enum{
	MODEL_UNDEFINED = 0,
	MODEL_VMG3312_T20A,
	MODEL_VMG1312_T20A
}model_name_t;

model_name_t zyutil_cofw_productNameGet(void);

#endif
