/* result-set.c generated by valac 0.30.0, the Vala compiler
 * generated from result-set.vala, do not modify */

/*
 * Copyright (C) 2010 Michal Hruby <michal.mhr@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by Michal Hruby <michal.mhr@gmail.com>
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define SYNAPSE_TYPE_RESULT_SET (synapse_result_set_get_type ())
#define SYNAPSE_RESULT_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_RESULT_SET, SynapseResultSet))
#define SYNAPSE_RESULT_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SYNAPSE_TYPE_RESULT_SET, SynapseResultSetClass))
#define SYNAPSE_IS_RESULT_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_RESULT_SET))
#define SYNAPSE_IS_RESULT_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SYNAPSE_TYPE_RESULT_SET))
#define SYNAPSE_RESULT_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SYNAPSE_TYPE_RESULT_SET, SynapseResultSetClass))

typedef struct _SynapseResultSet SynapseResultSet;
typedef struct _SynapseResultSetClass SynapseResultSetClass;
typedef struct _SynapseResultSetPrivate SynapseResultSetPrivate;

#define SYNAPSE_TYPE_MATCH (synapse_match_get_type ())
#define SYNAPSE_MATCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_MATCH, SynapseMatch))
#define SYNAPSE_MATCH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SYNAPSE_TYPE_MATCH, SynapseMatchClass))
#define SYNAPSE_IS_MATCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_MATCH))
#define SYNAPSE_IS_MATCH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SYNAPSE_TYPE_MATCH))
#define SYNAPSE_MATCH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SYNAPSE_TYPE_MATCH, SynapseMatchClass))

typedef struct _SynapseMatch SynapseMatch;
typedef struct _SynapseMatchClass SynapseMatchClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SYNAPSE_TYPE_URI_MATCH (synapse_uri_match_get_type ())
#define SYNAPSE_URI_MATCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SYNAPSE_TYPE_URI_MATCH, SynapseUriMatch))
#define SYNAPSE_URI_MATCH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SYNAPSE_TYPE_URI_MATCH, SynapseUriMatchClass))
#define SYNAPSE_IS_URI_MATCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SYNAPSE_TYPE_URI_MATCH))
#define SYNAPSE_IS_URI_MATCH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SYNAPSE_TYPE_URI_MATCH))
#define SYNAPSE_URI_MATCH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SYNAPSE_TYPE_URI_MATCH, SynapseUriMatchClass))

typedef struct _SynapseUriMatch SynapseUriMatch;
typedef struct _SynapseUriMatchClass SynapseUriMatchClass;

struct _SynapseResultSet {
	GObject parent_instance;
	SynapseResultSetPrivate * priv;
};

struct _SynapseResultSetClass {
	GObjectClass parent_class;
};

struct _SynapseResultSetPrivate {
	GeeMap* matches;
	GeeSet* uris;
};


static gpointer synapse_result_set_parent_class = NULL;
static GeeTraversableIface* synapse_result_set_gee_traversable_parent_iface = NULL;
static GeeIterableIface* synapse_result_set_gee_iterable_parent_iface = NULL;

GType synapse_result_set_get_type (void) G_GNUC_CONST;
GType synapse_match_get_type (void) G_GNUC_CONST;
#define SYNAPSE_RESULT_SET_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SYNAPSE_TYPE_RESULT_SET, SynapseResultSetPrivate))
enum  {
	SYNAPSE_RESULT_SET_DUMMY_PROPERTY,
	SYNAPSE_RESULT_SET_ELEMENT_TYPE,
	SYNAPSE_RESULT_SET_SIZE,
	SYNAPSE_RESULT_SET_KEYS,
	SYNAPSE_RESULT_SET_ENTRIES
};
SynapseResultSet* synapse_result_set_new (void);
SynapseResultSet* synapse_result_set_construct (GType object_type);
static GeeIterator* synapse_result_set_real_iterator (GeeIterable* base);
void synapse_result_set_add (SynapseResultSet* self, SynapseMatch* match, gint relevancy);
GType synapse_uri_match_get_type (void) G_GNUC_CONST;
const gchar* synapse_uri_match_get_uri (SynapseUriMatch* self);
void synapse_result_set_add_all (SynapseResultSet* self, SynapseResultSet* rs);
gboolean synapse_result_set_contains_uri (SynapseResultSet* self, const gchar* uri);
static gboolean synapse_result_set_real_foreach (GeeTraversable* base, GeeForallFunc func, void* func_target);
GeeList* synapse_result_set_get_sorted_list (SynapseResultSet* self);
static gint __lambda4_ (SynapseResultSet* self, GeeMapEntry* a, GeeMapEntry* b);
const gchar* synapse_match_get_title (SynapseMatch* self);
static gint ___lambda4__gcompare_data_func (gconstpointer a, gconstpointer b, gpointer self);
gint synapse_result_set_get_size (SynapseResultSet* self);
GeeSet* synapse_result_set_get_keys (SynapseResultSet* self);
GeeSet* synapse_result_set_get_entries (SynapseResultSet* self);
static GObject * synapse_result_set_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void synapse_result_set_finalize (GObject* obj);
static void _vala_synapse_result_set_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);


SynapseResultSet* synapse_result_set_construct (GType object_type) {
	SynapseResultSet * self = NULL;
#line 30 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self = (SynapseResultSet*) g_object_new (object_type, NULL);
#line 28 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return self;
#line 120 "result-set.c"
}


SynapseResultSet* synapse_result_set_new (void) {
#line 28 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return synapse_result_set_construct (SYNAPSE_TYPE_RESULT_SET);
#line 127 "result-set.c"
}


static GeeIterator* synapse_result_set_real_iterator (GeeIterable* base) {
	SynapseResultSet * self;
	GeeIterator* result = NULL;
	GeeMap* _tmp0_ = NULL;
	GeeIterator* _tmp1_ = NULL;
#line 60 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self = (SynapseResultSet*) base;
#line 62 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = self->priv->matches;
#line 62 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = gee_iterable_iterator ((GeeIterable*) _tmp0_);
#line 62 "/home/heider/github/synapse-project/src/core/result-set.vala"
	result = _tmp1_;
#line 62 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 146 "result-set.c"
}


void synapse_result_set_add (SynapseResultSet* self, SynapseMatch* match, gint relevancy) {
	GeeMap* _tmp0_ = NULL;
	SynapseMatch* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	SynapseUriMatch* uri_match = NULL;
	SynapseMatch* _tmp3_ = NULL;
	SynapseUriMatch* _tmp4_ = NULL;
#line 65 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_if_fail (self != NULL);
#line 65 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_if_fail (match != NULL);
#line 67 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = self->priv->matches;
#line 67 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = match;
#line 67 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = relevancy;
#line 67 "/home/heider/github/synapse-project/src/core/result-set.vala"
	gee_map_set (_tmp0_, _tmp1_, (gpointer) ((gintptr) _tmp2_));
#line 69 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp3_ = match;
#line 69 "/home/heider/github/synapse-project/src/core/result-set.vala"
	uri_match = G_TYPE_CHECK_INSTANCE_TYPE (_tmp3_, SYNAPSE_TYPE_URI_MATCH) ? ((SynapseUriMatch*) _tmp3_) : NULL;
#line 70 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp4_ = uri_match;
#line 70 "/home/heider/github/synapse-project/src/core/result-set.vala"
	if (_tmp4_ != NULL) {
#line 177 "result-set.c"
		const gchar* uri = NULL;
		SynapseUriMatch* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gboolean _tmp8_ = FALSE;
		const gchar* _tmp9_ = NULL;
#line 72 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp5_ = uri_match;
#line 72 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp6_ = synapse_uri_match_get_uri (_tmp5_);
#line 72 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp7_ = _tmp6_;
#line 72 "/home/heider/github/synapse-project/src/core/result-set.vala"
		uri = _tmp7_;
#line 73 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp9_ = uri;
#line 73 "/home/heider/github/synapse-project/src/core/result-set.vala"
		if (_tmp9_ != NULL) {
#line 196 "result-set.c"
			const gchar* _tmp10_ = NULL;
#line 73 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp10_ = uri;
#line 73 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp8_ = g_strcmp0 (_tmp10_, "") != 0;
#line 202 "result-set.c"
		} else {
#line 73 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp8_ = FALSE;
#line 206 "result-set.c"
		}
#line 73 "/home/heider/github/synapse-project/src/core/result-set.vala"
		if (_tmp8_) {
#line 210 "result-set.c"
			GeeSet* _tmp11_ = NULL;
			const gchar* _tmp12_ = NULL;
#line 75 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp11_ = self->priv->uris;
#line 75 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp12_ = uri;
#line 75 "/home/heider/github/synapse-project/src/core/result-set.vala"
			gee_collection_add ((GeeCollection*) _tmp11_, _tmp12_);
#line 219 "result-set.c"
		}
	}
}


void synapse_result_set_add_all (SynapseResultSet* self, SynapseResultSet* rs) {
	SynapseResultSet* _tmp0_ = NULL;
	GeeMap* _tmp1_ = NULL;
	SynapseResultSet* _tmp2_ = NULL;
	GeeMap* _tmp3_ = NULL;
	GeeSet* _tmp4_ = NULL;
	SynapseResultSet* _tmp5_ = NULL;
	GeeSet* _tmp6_ = NULL;
#line 80 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_if_fail (self != NULL);
#line 82 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = rs;
#line 82 "/home/heider/github/synapse-project/src/core/result-set.vala"
	if (_tmp0_ == NULL) {
#line 82 "/home/heider/github/synapse-project/src/core/result-set.vala"
		return;
#line 241 "result-set.c"
	}
#line 83 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = self->priv->matches;
#line 83 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = rs;
#line 83 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp3_ = _tmp2_->priv->matches;
#line 83 "/home/heider/github/synapse-project/src/core/result-set.vala"
	gee_map_set_all (_tmp1_, _tmp3_);
#line 84 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp4_ = self->priv->uris;
#line 84 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp5_ = rs;
#line 84 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp6_ = _tmp5_->priv->uris;
#line 84 "/home/heider/github/synapse-project/src/core/result-set.vala"
	gee_collection_add_all ((GeeCollection*) _tmp4_, (GeeCollection*) _tmp6_);
#line 259 "result-set.c"
}


gboolean synapse_result_set_contains_uri (SynapseResultSet* self, const gchar* uri) {
	gboolean result = FALSE;
	GeeSet* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
#line 87 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 87 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_val_if_fail (uri != NULL, FALSE);
#line 89 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = self->priv->uris;
#line 89 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = uri;
#line 89 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = gee_collection_contains ((GeeCollection*) _tmp0_, _tmp1_);
#line 89 "/home/heider/github/synapse-project/src/core/result-set.vala"
	result = _tmp2_;
#line 89 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 282 "result-set.c"
}


static gboolean synapse_result_set_real_foreach (GeeTraversable* base, GeeForallFunc func, void* func_target) {
	SynapseResultSet * self;
	gboolean result = FALSE;
	GeeMap* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
	GeeForallFunc _tmp4_ = NULL;
	void* _tmp4__target = NULL;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
#line 92 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self = (SynapseResultSet*) base;
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = self->priv->matches;
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = gee_map_get_keys (_tmp0_);
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = _tmp1_;
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp3_ = _tmp2_;
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp4_ = func;
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp4__target = func_target;
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp5_ = gee_traversable_foreach ((GeeTraversable*) _tmp3_, _tmp4_, _tmp4__target);
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp6_ = _tmp5_;
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_g_object_unref0 (_tmp3_);
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	result = _tmp6_;
#line 94 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 321 "result-set.c"
}


static gint __lambda4_ (SynapseResultSet* self, GeeMapEntry* a, GeeMapEntry* b) {
	gint result = 0;
	GeeMapEntry* e1 = NULL;
	GeeMapEntry* _tmp0_ = NULL;
	GeeMapEntry* e2 = NULL;
	GeeMapEntry* _tmp1_ = NULL;
	gint relevancy_delta = 0;
	GeeMapEntry* _tmp2_ = NULL;
	gconstpointer _tmp3_ = NULL;
	gint _tmp4_ = 0;
	GeeMapEntry* _tmp5_ = NULL;
	gconstpointer _tmp6_ = NULL;
	gint _tmp7_ = 0;
	gint _tmp8_ = 0;
#line 102 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_val_if_fail (a != NULL, 0);
#line 102 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_val_if_fail (b != NULL, 0);
#line 103 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = a;
#line 103 "/home/heider/github/synapse-project/src/core/result-set.vala"
	e1 = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_MAP_TYPE_ENTRY, GeeMapEntry);
#line 104 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = b;
#line 104 "/home/heider/github/synapse-project/src/core/result-set.vala"
	e2 = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, GEE_MAP_TYPE_ENTRY, GeeMapEntry);
#line 105 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = e2;
#line 105 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp3_ = gee_map_entry_get_value (_tmp2_);
#line 105 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp4_ = _tmp3_;
#line 105 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp5_ = e1;
#line 105 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp6_ = gee_map_entry_get_value (_tmp5_);
#line 105 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp7_ = _tmp6_;
#line 105 "/home/heider/github/synapse-project/src/core/result-set.vala"
	relevancy_delta = ((gint) ((gintptr) _tmp4_)) - ((gint) ((gintptr) _tmp7_));
#line 106 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp8_ = relevancy_delta;
#line 106 "/home/heider/github/synapse-project/src/core/result-set.vala"
	if (_tmp8_ != 0) {
#line 106 "/home/heider/github/synapse-project/src/core/result-set.vala"
		result = relevancy_delta;
#line 106 "/home/heider/github/synapse-project/src/core/result-set.vala"
		return result;
#line 373 "result-set.c"
	} else {
		GeeMapEntry* _tmp9_ = NULL;
		gconstpointer _tmp10_ = NULL;
		SynapseMatch* _tmp11_ = NULL;
		const gchar* _tmp12_ = NULL;
		const gchar* _tmp13_ = NULL;
		GeeMapEntry* _tmp14_ = NULL;
		gconstpointer _tmp15_ = NULL;
		SynapseMatch* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
		const gchar* _tmp18_ = NULL;
		gint _tmp19_ = 0;
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp9_ = e1;
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp10_ = gee_map_entry_get_key (_tmp9_);
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp11_ = _tmp10_;
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp12_ = synapse_match_get_title ((SynapseMatch*) _tmp11_);
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp13_ = _tmp12_;
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp14_ = e2;
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp15_ = gee_map_entry_get_key (_tmp14_);
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp16_ = _tmp15_;
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp17_ = synapse_match_get_title ((SynapseMatch*) _tmp16_);
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp18_ = _tmp17_;
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp19_ = g_ascii_strcasecmp (_tmp13_, _tmp18_);
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		result = _tmp19_;
#line 108 "/home/heider/github/synapse-project/src/core/result-set.vala"
		return result;
#line 412 "result-set.c"
	}
}


static gint ___lambda4__gcompare_data_func (gconstpointer a, gconstpointer b, gpointer self) {
	gint result;
	result = __lambda4_ ((SynapseResultSet*) self, (GeeMapEntry*) a, (GeeMapEntry*) b);
#line 102 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 422 "result-set.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return self ? g_object_ref (self) : NULL;
#line 429 "result-set.c"
}


GeeList* synapse_result_set_get_sorted_list (SynapseResultSet* self) {
	GeeList* result = NULL;
	GeeArrayList* l = NULL;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	GeeMap* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
	GeeSet* _tmp4_ = NULL;
	GeeSet* _tmp5_ = NULL;
	GeeArrayList* _tmp6_ = NULL;
	GeeArrayList* sorted_list = NULL;
	GeeArrayList* _tmp7_ = NULL;
#line 97 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 99 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = gee_array_list_new (GEE_MAP_TYPE_ENTRY, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
#line 99 "/home/heider/github/synapse-project/src/core/result-set.vala"
	l = _tmp0_;
#line 100 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = l;
#line 100 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = self->priv->matches;
#line 100 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp3_ = gee_map_get_entries (_tmp2_);
#line 100 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp4_ = _tmp3_;
#line 100 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp5_ = _tmp4_;
#line 100 "/home/heider/github/synapse-project/src/core/result-set.vala"
	gee_array_list_add_all (_tmp1_, (GeeCollection*) _tmp5_);
#line 100 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_g_object_unref0 (_tmp5_);
#line 102 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp6_ = l;
#line 102 "/home/heider/github/synapse-project/src/core/result-set.vala"
	gee_list_sort ((GeeList*) _tmp6_, ___lambda4__gcompare_data_func, g_object_ref (self), g_object_unref);
#line 111 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp7_ = gee_array_list_new (SYNAPSE_TYPE_MATCH, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
#line 111 "/home/heider/github/synapse-project/src/core/result-set.vala"
	sorted_list = _tmp7_;
#line 473 "result-set.c"
	{
		GeeArrayList* _m_list = NULL;
		GeeArrayList* _tmp8_ = NULL;
		GeeArrayList* _tmp9_ = NULL;
		gint _m_size = 0;
		GeeArrayList* _tmp10_ = NULL;
		gint _tmp11_ = 0;
		gint _tmp12_ = 0;
		gint _m_index = 0;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp8_ = l;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp9_ = _g_object_ref0 (_tmp8_);
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_m_list = _tmp9_;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp10_ = _m_list;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp11_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp10_);
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_tmp12_ = _tmp11_;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_m_size = _tmp12_;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_m_index = -1;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		while (TRUE) {
#line 501 "result-set.c"
			gint _tmp13_ = 0;
			gint _tmp14_ = 0;
			gint _tmp15_ = 0;
			GeeMapEntry* m = NULL;
			GeeArrayList* _tmp16_ = NULL;
			gint _tmp17_ = 0;
			gpointer _tmp18_ = NULL;
			GeeArrayList* _tmp19_ = NULL;
			GeeMapEntry* _tmp20_ = NULL;
			gconstpointer _tmp21_ = NULL;
			SynapseMatch* _tmp22_ = NULL;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp13_ = _m_index;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_m_index = _tmp13_ + 1;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp14_ = _m_index;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp15_ = _m_size;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			if (!(_tmp14_ < _tmp15_)) {
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
				break;
#line 525 "result-set.c"
			}
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp16_ = _m_list;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp17_ = _m_index;
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp18_ = gee_abstract_list_get ((GeeAbstractList*) _tmp16_, _tmp17_);
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			m = (GeeMapEntry*) _tmp18_;
#line 114 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp19_ = sorted_list;
#line 114 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp20_ = m;
#line 114 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp21_ = gee_map_entry_get_key (_tmp20_);
#line 114 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_tmp22_ = _tmp21_;
#line 114 "/home/heider/github/synapse-project/src/core/result-set.vala"
			gee_abstract_collection_add ((GeeAbstractCollection*) _tmp19_, (SynapseMatch*) _tmp22_);
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
			_g_object_unref0 (m);
#line 547 "result-set.c"
		}
#line 112 "/home/heider/github/synapse-project/src/core/result-set.vala"
		_g_object_unref0 (_m_list);
#line 551 "result-set.c"
	}
#line 117 "/home/heider/github/synapse-project/src/core/result-set.vala"
	result = (GeeList*) sorted_list;
#line 117 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_g_object_unref0 (l);
#line 117 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 559 "result-set.c"
}


static GType synapse_result_set_real_get_element_type (GeeTraversable* base) {
	GType result;
	SynapseResultSet* self;
	GeeMap* _tmp0_ = NULL;
	GType _tmp1_ = 0UL;
	GType _tmp2_ = 0UL;
#line 42 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self = (SynapseResultSet*) base;
#line 42 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = self->priv->matches;
#line 42 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = gee_traversable_get_element_type ((GeeTraversable*) _tmp0_);
#line 42 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = _tmp1_;
#line 42 "/home/heider/github/synapse-project/src/core/result-set.vala"
	result = _tmp2_;
#line 42 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 581 "result-set.c"
}


gint synapse_result_set_get_size (SynapseResultSet* self) {
	gint result;
	GeeMap* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
#line 47 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 47 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = self->priv->matches;
#line 47 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = gee_map_get_size (_tmp0_);
#line 47 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = _tmp1_;
#line 47 "/home/heider/github/synapse-project/src/core/result-set.vala"
	result = _tmp2_;
#line 47 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 602 "result-set.c"
}


GeeSet* synapse_result_set_get_keys (SynapseResultSet* self) {
	GeeSet* result;
	GeeMap* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
#line 52 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 52 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = self->priv->matches;
#line 52 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = gee_map_get_keys (_tmp0_);
#line 52 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = _tmp1_;
#line 52 "/home/heider/github/synapse-project/src/core/result-set.vala"
	result = _tmp2_;
#line 52 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 623 "result-set.c"
}


GeeSet* synapse_result_set_get_entries (SynapseResultSet* self) {
	GeeSet* result;
	GeeMap* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
#line 57 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 57 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = self->priv->matches;
#line 57 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = gee_map_get_entries (_tmp0_);
#line 57 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp2_ = _tmp1_;
#line 57 "/home/heider/github/synapse-project/src/core/result-set.vala"
	result = _tmp2_;
#line 57 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return result;
#line 644 "result-set.c"
}


static GObject * synapse_result_set_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	SynapseResultSet * self;
	GeeHashMap* _tmp0_ = NULL;
	GeeHashSet* _tmp1_ = NULL;
#line 33 "/home/heider/github/synapse-project/src/core/result-set.vala"
	parent_class = G_OBJECT_CLASS (synapse_result_set_parent_class);
#line 33 "/home/heider/github/synapse-project/src/core/result-set.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 33 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SYNAPSE_TYPE_RESULT_SET, SynapseResultSet);
#line 35 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp0_ = gee_hash_map_new (SYNAPSE_TYPE_MATCH, (GBoxedCopyFunc) g_object_ref, g_object_unref, G_TYPE_INT, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 35 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_g_object_unref0 (self->priv->matches);
#line 35 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self->priv->matches = (GeeMap*) _tmp0_;
#line 37 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_tmp1_ = gee_hash_set_new (G_TYPE_STRING, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 37 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_g_object_unref0 (self->priv->uris);
#line 37 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self->priv->uris = (GeeSet*) _tmp1_;
#line 33 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return obj;
#line 674 "result-set.c"
}


static void synapse_result_set_class_init (SynapseResultSetClass * klass) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	synapse_result_set_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_type_class_add_private (klass, sizeof (SynapseResultSetPrivate));
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_synapse_result_set_get_property;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	G_OBJECT_CLASS (klass)->constructor = synapse_result_set_constructor;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	G_OBJECT_CLASS (klass)->finalize = synapse_result_set_finalize;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SYNAPSE_RESULT_SET_ELEMENT_TYPE, g_param_spec_gtype ("element-type", "element-type", "element-type", G_TYPE_NONE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SYNAPSE_RESULT_SET_SIZE, g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SYNAPSE_RESULT_SET_KEYS, g_param_spec_object ("keys", "keys", "keys", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SYNAPSE_RESULT_SET_ENTRIES, g_param_spec_object ("entries", "entries", "entries", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 697 "result-set.c"
}


static GType synapse_result_set_gee_traversable_get_g_type (SynapseResultSet* self) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return SYNAPSE_TYPE_MATCH;
#line 704 "result-set.c"
}


static GBoxedCopyFunc synapse_result_set_gee_traversable_get_g_dup_func (SynapseResultSet* self) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return g_object_ref;
#line 711 "result-set.c"
}


static GDestroyNotify synapse_result_set_gee_traversable_get_g_destroy_func (SynapseResultSet* self) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return g_object_unref;
#line 718 "result-set.c"
}


static void synapse_result_set_gee_traversable_interface_init (GeeTraversableIface * iface) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	synapse_result_set_gee_traversable_parent_iface = g_type_interface_peek_parent (iface);
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->foreach = (gboolean (*)(GeeTraversable*, GeeForallFunc, void*)) synapse_result_set_real_foreach;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->get_g_type = (GType(*)(GeeTraversable*)) synapse_result_set_gee_traversable_get_g_type;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->get_g_dup_func = (GBoxedCopyFunc(*)(GeeTraversable*)) synapse_result_set_gee_traversable_get_g_dup_func;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->get_g_destroy_func = (GDestroyNotify(*)(GeeTraversable*)) synapse_result_set_gee_traversable_get_g_destroy_func;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->get_element_type = synapse_result_set_real_get_element_type;
#line 735 "result-set.c"
}


static GType synapse_result_set_gee_iterable_get_g_type (SynapseResultSet* self) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return GEE_MAP_TYPE_ENTRY;
#line 742 "result-set.c"
}


static GBoxedCopyFunc synapse_result_set_gee_iterable_get_g_dup_func (SynapseResultSet* self) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return g_object_ref;
#line 749 "result-set.c"
}


static GDestroyNotify synapse_result_set_gee_iterable_get_g_destroy_func (SynapseResultSet* self) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	return g_object_unref;
#line 756 "result-set.c"
}


static void synapse_result_set_gee_iterable_interface_init (GeeIterableIface * iface) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	synapse_result_set_gee_iterable_parent_iface = g_type_interface_peek_parent (iface);
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->iterator = (GeeIterator* (*)(GeeIterable*)) synapse_result_set_real_iterator;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->get_g_type = (GType(*)(GeeIterable*)) synapse_result_set_gee_iterable_get_g_type;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->get_g_dup_func = (GBoxedCopyFunc(*)(GeeIterable*)) synapse_result_set_gee_iterable_get_g_dup_func;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	iface->get_g_destroy_func = (GDestroyNotify(*)(GeeIterable*)) synapse_result_set_gee_iterable_get_g_destroy_func;
#line 771 "result-set.c"
}


static void synapse_result_set_instance_init (SynapseResultSet * self) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self->priv = SYNAPSE_RESULT_SET_GET_PRIVATE (self);
#line 778 "result-set.c"
}


static void synapse_result_set_finalize (GObject* obj) {
	SynapseResultSet * self;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SYNAPSE_TYPE_RESULT_SET, SynapseResultSet);
#line 25 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_g_object_unref0 (self->priv->matches);
#line 26 "/home/heider/github/synapse-project/src/core/result-set.vala"
	_g_object_unref0 (self->priv->uris);
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	G_OBJECT_CLASS (synapse_result_set_parent_class)->finalize (obj);
#line 792 "result-set.c"
}


GType synapse_result_set_get_type (void) {
	static volatile gsize synapse_result_set_type_id__volatile = 0;
	if (g_once_init_enter (&synapse_result_set_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SynapseResultSetClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) synapse_result_set_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SynapseResultSet), 0, (GInstanceInitFunc) synapse_result_set_instance_init, NULL };
		static const GInterfaceInfo gee_traversable_info = { (GInterfaceInitFunc) synapse_result_set_gee_traversable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo gee_iterable_info = { (GInterfaceInitFunc) synapse_result_set_gee_iterable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType synapse_result_set_type_id;
		synapse_result_set_type_id = g_type_register_static (G_TYPE_OBJECT, "SynapseResultSet", &g_define_type_info, 0);
		g_type_add_interface_static (synapse_result_set_type_id, GEE_TYPE_TRAVERSABLE, &gee_traversable_info);
		g_type_add_interface_static (synapse_result_set_type_id, GEE_TYPE_ITERABLE, &gee_iterable_info);
		g_once_init_leave (&synapse_result_set_type_id__volatile, synapse_result_set_type_id);
	}
	return synapse_result_set_type_id__volatile;
}


static void _vala_synapse_result_set_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SynapseResultSet * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SYNAPSE_TYPE_RESULT_SET, SynapseResultSet);
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
	switch (property_id) {
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		case SYNAPSE_RESULT_SET_ELEMENT_TYPE:
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		g_value_set_gtype (value, gee_traversable_get_element_type ((GeeTraversable*) self));
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		break;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		case SYNAPSE_RESULT_SET_SIZE:
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		g_value_set_int (value, synapse_result_set_get_size (self));
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		break;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		case SYNAPSE_RESULT_SET_KEYS:
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		g_value_take_object (value, synapse_result_set_get_keys (self));
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		break;
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		case SYNAPSE_RESULT_SET_ENTRIES:
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		g_value_take_object (value, synapse_result_set_get_entries (self));
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		break;
#line 841 "result-set.c"
		default:
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/heider/github/synapse-project/src/core/result-set.vala"
		break;
#line 847 "result-set.c"
	}
}



