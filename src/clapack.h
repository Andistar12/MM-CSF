
#ifndef __LAPACK_H
#define __LAPACK_H

#ifdef __cplusplus 	
extern "C" {	
#endif		

/* Cholesky factorization */
void dpotrf_(
    char *,
    int *,
    double *,
    int *,
    int *);
void dpotrs_(
    char *, int *,
    int *,
    double *,
    int *,
    double *,
    int *,
    int *);

/* Rank-k update. */
void dsyrk_(
    char *,
    char *,
    int *,
    int *,
    double *,
    double *,
    int *,
    double *,
    double *,
    int *);

/* LU */
void dgetrf_(
    int *,
    int *,
    double *,
    int *,
    int *,
    int *);
void dgetrs_(
    char *,
    int *,
    int *,
    double *,
    int *,
    int *,
    double *,
    int *,
    int *);
void dgesv_(
    int *,
    int *,
    double *,
    int *,
    int *,
    double *,
    int *,
    int *);





#ifdef __cplusplus
}
#endif


#endif /* __LAPACK_H */
