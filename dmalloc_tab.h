/*
 * Local defines for the memory table.
 *
 * Copyright 1999 by Gray Watson
 *
 * This file is part of the dmalloc package.
 *
 * Permission to use, copy, modify, and distribute this software for
 * any purpose and without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies, and that the name of Gray Watson not be used in advertising
 * or publicity pertaining to distribution of the document or software
 * without specific, written prior permission.
 *
 * Gray Watson makes no representations about the suitability of the
 * software described herein for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * The author may be contacted via http://dmalloc.com/
 *
 * $Id: dmalloc_tab.h,v 1.2 2000/03/20 23:19:25 gray Exp $
 */

#ifndef __DMALLOC_TAB_H__
#define __DMALLOC_TAB_H__

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/*
 * void _table_clear
 *
 * DESCRIPTION:
 *
 * Clear out the allocation information in our table.  We are going to
 * be loading it with other info.
 *
 * RETURNS:
 *
 * None.
 *
 * ARGUMENTS:
 *
 * None.
 */
extern
void	_table_clear(void);

/*
 * void _table_alloc
 *
 * DESCRIPTION:
 *
 * Register an allocation with the memory table.
 *
 * RETURNS:
 *
 * None.
 *
 * ARGUMENTS:
 *
 * file -> File name or return address of the allocation. 
 *
 * line -> Line number of the allocation.
 *
 * size -> Size in bytes of the allocation.
 */
extern
void	_table_alloc(const char *file, const unsigned int line,
		     const unsigned long size);

/*
 * void _table_free
 *
 * DESCRIPTION:
 *
 * Register an allocation with the memory table.
 *
 * RETURNS:
 *
 * None.
 *
 * ARGUMENTS:
 *
 * old_file -> File name or return address of the allocation _not_ the
 * free itself.
 *
 * old_line -> Line number of the allocation _not_ the free itself.
 *
 * size -> Size in bytes of the allocation.
 */
extern
void	_table_free(const char *old_file, const unsigned int old_line,
		    const DMALLOC_SIZE size);

/*
 * void _table_log_info
 *
 * DESCRIPTION:
 *
 * Log information from the memory table to the log file.
 *
 * RETURNS:
 *
 * None.
 *
 * ARGUMENTS:
 *
 * entry_n -> Number of entries to log to the file.  Set to 0 to
 * display all entries in the table.
 *
 * in_use_b -> Display the in-use numbers.
 */
extern
void	_table_log_info(const int entry_n, const int in_use_b);

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __DMALLOC_TAB_H__ */
