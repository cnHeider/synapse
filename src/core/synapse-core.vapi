/* synapse-core.vapi generated by valac 0.30.1, do not modify. */

namespace Synapse {
	[CCode (gir_namespace = "SynapseUtils", gir_version = "1.0")]
	namespace Utils {
		[CCode (cheader_filename = "synapse-core.h")]
		public class AsyncOnce<G> {
			public AsyncOnce ();
			public async bool enter ();
			public unowned G get_data ();
			public bool is_initialized ();
			public void leave (G result);
			public void reset ();
		}
		[CCode (cheader_filename = "synapse-core.h")]
		public class FileInfo {
			public Synapse.QueryFlags file_type;
			public Synapse.UriMatch? match_obj;
			public string parse_name;
			public string uri;
			public FileInfo (string uri, GLib.Type obj_type);
			public async bool exists ();
			public async void initialize ();
			public bool is_initialized ();
		}
		[CCode (cheader_filename = "synapse-core.h")]
		public class Logger {
			public enum LogLevel {
				DEBUG,
				INFO,
				WARN,
				ERROR,
				FATAL
			}
			public static void initialize ();
			public static Synapse.Utils.Logger.LogLevel DisplayLevel { get; set; }
		}
		[CCode (cheader_filename = "synapse-core.h")]
		public static string extract_type_name (GLib.Type obj_type);
		[CCode (cheader_filename = "synapse-core.h")]
		public static void open_uri (string uri);
		[CCode (cheader_filename = "synapse-core.h")]
		public static async bool query_exists_async (GLib.File f);
		[CCode (cheader_filename = "synapse-core.h")]
		public static string? remove_accents (string input);
		[CCode (cheader_filename = "synapse-core.h")]
		public static string? remove_last_unichar (string input);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public abstract class Action : Synapse.Match {
		public Action ();
		public abstract void do_execute (Synapse.Match source, Synapse.Match? target = null);
		public override void execute_with_target (Synapse.Match source, Synapse.Match? target = null);
		public virtual int get_relevancy_for_match (Synapse.Match match);
		public abstract bool valid_for_match (Synapse.Match match);
		public int default_relevancy { get; set; }
		public bool notify_match { get; set; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public abstract class ActionMatch : Synapse.Match {
		public ActionMatch ();
		public abstract void do_action ();
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class ApplicationMatch : Synapse.Match {
		public ApplicationMatch ();
		public GLib.AppInfo? app_info { get; set; }
		public string? filename { get; set construct; }
		public bool needs_terminal { get; set; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class CommonActions : GLib.Object, Synapse.Activatable, Synapse.ActionProvider {
		public CommonActions ();
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public abstract class ConfigObject : GLib.Object {
		public ConfigObject ();
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class ConfigService : GLib.Object {
		public Synapse.ConfigObject bind_config (string group, string key, GLib.Type config_type);
		public Synapse.ConfigObject get_config (string group, string key, GLib.Type config_type);
		public static Synapse.ConfigService get_default ();
		public void save ();
		public void set_config (string group, string key, Synapse.ConfigObject cfg_obj);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public abstract class ContactMatch : Synapse.Match {
		public ContactMatch ();
		public abstract void open_chat ();
		public abstract void send_message (string message, bool present);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class DBusService : GLib.Object {
		public static Synapse.DBusService get_default ();
		public async void initialize ();
		public bool name_has_owner (string name);
		public bool name_is_activatable (string name);
		public bool service_is_available (string name);
		public signal void owner_changed (string name, bool is_owned);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class DataSink : GLib.Object, Synapse.SearchProvider {
		public DataSink ();
		public Gee.List<Synapse.Match> find_actions_for_match (Synapse.Match match, string? query, Synapse.QueryFlags flags);
		protected Gee.List<Synapse.Match> find_actions_for_unknown_match (Synapse.Match match, Synapse.QueryFlags flags);
		public unowned GLib.Object? get_plugin (string name);
		public bool is_plugin_enabled (GLib.Type plugin_type);
		protected void register_plugin (GLib.Object plugin);
		public void register_static_plugin (GLib.Type plugin_type);
		public void set_plugin_enabled (GLib.Type plugin_type, bool enabled);
		public bool has_empty_handlers { get; set; }
		public bool has_unknown_handlers { get; set; }
		public signal void plugin_registered (GLib.Object plugin);
		[Signal (detailed = true)]
		public signal void search_done (Synapse.ResultSet rs, uint query_id);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class DesktopFileInfo : GLib.Object {
		public string[] mime_types;
		public DesktopFileInfo ();
		public DesktopFileInfo.for_keyfile (string path, GLib.KeyFile keyfile, string desktop_id);
		public unowned string get_name_folded ();
		public string comment { get; set; }
		public string desktop_id { get; set construct; }
		public string exec { get; set; }
		public string filename { get; set construct; }
		public string icon_name { get; set construct; }
		public bool is_hidden { get; private set; }
		public bool is_valid { get; private set; }
		public string name { get; set construct; }
		public bool needs_terminal { get; set; }
		public Synapse.DesktopEnvironmentType show_in { get; set; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class DesktopFileService : GLib.Object {
		public Gee.List<Synapse.DesktopFileInfo> get_all_desktop_files ();
		public static Synapse.DesktopFileService get_default ();
		public Synapse.DesktopFileInfo? get_desktop_file_for_id (string desktop_id);
		public Gee.List<Synapse.DesktopFileInfo> get_desktop_files ();
		public Gee.List<Synapse.DesktopFileInfo> get_desktop_files_for_exec (string exec);
		public Gee.List<Synapse.DesktopFileInfo> get_desktop_files_for_type (string mime_type);
		public Synapse.DesktopEnvironmentType get_environment ();
		public async void initialize ();
		public signal void reload_done ();
		public signal void reload_started ();
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public abstract class Match : GLib.Object {
		public Match ();
		public virtual void execute (Synapse.Match match);
		public virtual void execute_with_target (Synapse.Match source, Synapse.Match? target = null);
		public virtual bool needs_target ();
		public virtual Synapse.QueryFlags target_flags ();
		public string description { get; set construct; }
		public bool has_thumbnail { get; set construct; }
		public string icon_name { get; set construct; }
		public string thumbnail_path { get; set construct; }
		public string title { get; set construct; }
		public signal void executed ();
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class PluginInfo {
		public string description;
		public string icon_name;
		public GLib.Type plugin_type;
		public Synapse.PluginRegisterFunc register_func;
		public bool runnable;
		public string runnable_error;
		public string title;
		public PluginInfo (GLib.Type type, string title, string desc, string icon_name, Synapse.PluginRegisterFunc reg_func, bool runnable, string runnable_error);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class PluginRegistry : GLib.Object {
		public static weak Synapse.PluginRegistry instance;
		public PluginRegistry ();
		public static Synapse.PluginRegistry get_default ();
		public Synapse.PluginInfo? get_plugin_info_for_type (GLib.Type plugin_type);
		public Gee.List<Synapse.PluginInfo> get_plugins ();
		public void register_plugin (GLib.Type plugin_type, string title, string description, string icon_name, Synapse.PluginRegisterFunc reg_func, bool runnable = true, string runnable_error = "");
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class RelevancyService : GLib.Object {
		public void application_launched (GLib.AppInfo app_info);
		public static int compute_relevancy (int base_relevancy, float modifier);
		public float get_application_popularity (string desktop_id);
		public static Synapse.RelevancyService get_default ();
		public float get_uri_popularity (string uri);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class ResultSet : GLib.Object, Gee.Traversable<Synapse.Match>, Gee.Iterable<Gee.Map.Entry<Synapse.Match,int>> {
		public ResultSet ();
		public void add (Synapse.Match match, int relevancy);
		public void add_all (Synapse.ResultSet? rs);
		public bool contains_uri (string uri);
		public Gee.List<Synapse.Match> get_sorted_list ();
		public Gee.Set<Gee.Map.Entry<Synapse.Match,int>> entries { owned get; }
		public Gee.Set<Synapse.Match> keys { owned get; }
		public int size { get; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public abstract class SearchMatch : Synapse.Match, Synapse.SearchProvider {
		public SearchMatch ();
		public abstract async Gee.List<Synapse.Match> search (string query, Synapse.QueryFlags flags, Synapse.ResultSet? dest_result_set, GLib.Cancellable? cancellable = null) throws Synapse.SearchError;
		public Synapse.Match search_source { get; set; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public abstract class TextMatch : Synapse.Match {
		public TextMatch ();
		public abstract string get_text ();
		public Synapse.TextOrigin text_origin { get; construct; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class UnknownMatch : Synapse.Match {
		public UnknownMatch (string query_string);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class UriMatch : Synapse.Match {
		public UriMatch ();
		public Synapse.QueryFlags file_type { get; set; }
		public string mime_type { get; set; }
		public string uri { get; set; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public class VolumeService : GLib.Object {
		public class VolumeObject : Synapse.UriMatch {
			public VolumeObject (GLib.Volume volume);
			public bool is_mounted ();
			public void update_state ();
			public GLib.Volume volume { get; set; }
		}
		public static Synapse.VolumeService get_default ();
		public Gee.Collection<Synapse.VolumeService.VolumeObject> get_volumes ();
		protected void initialize ();
		public string? uri_to_volume_name (string uri, out string? volume_path);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public interface ActionProvider : Synapse.Activatable {
		public abstract Synapse.ResultSet? find_for_match (ref Synapse.Query query, Synapse.Match match);
		public virtual bool handles_unknown ();
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public interface Activatable : GLib.Object {
		public abstract void activate ();
		public abstract void deactivate ();
		public abstract bool enabled { get; set; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public interface Configurable : GLib.Object {
		public abstract Gtk.Widget create_config_widget ();
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public interface ExtendedInfo {
		public abstract string? extended_info { get; set; }
	}
	[CCode (cheader_filename = "synapse-core.h")]
	[DBus (name = "org.freedesktop.DBus")]
	public interface FreeDesktopDBus : GLib.Object {
		public const string OBJECT_PATH;
		public const string UNIQUE_NAME;
		public abstract async string get_name_owner (string name) throws GLib.IOError;
		public abstract async string[] list_activatable_names () throws GLib.IOError;
		public abstract async string[] list_names () throws GLib.IOError;
		public abstract async string[] list_queued_owners (string name) throws GLib.IOError;
		public abstract async bool name_has_owner (string name) throws GLib.IOError;
		public abstract async uint32 start_service_by_name (string name, uint32 flags) throws GLib.IOError;
		public signal void name_owner_changed (string name, string old_owner, string new_owner);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public interface ItemProvider : Synapse.Activatable {
		public virtual bool handles_empty_query ();
		public virtual bool handles_query (Synapse.Query query);
		public abstract async Synapse.ResultSet? search (Synapse.Query query) throws Synapse.SearchError;
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public interface RelevancyBackend : GLib.Object {
		public abstract void application_launched (GLib.AppInfo app_info);
		public abstract float get_application_popularity (string desktop_id);
		public abstract float get_uri_popularity (string uri);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public interface SearchProvider : GLib.Object {
		public abstract async Gee.List<Synapse.Match> search (string query, Synapse.QueryFlags flags, Synapse.ResultSet? dest_result_set, GLib.Cancellable? cancellable = null) throws Synapse.SearchError;
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public struct Query {
		public string query_string;
		public string query_string_folded;
		public GLib.Cancellable cancellable;
		public Synapse.QueryFlags query_type;
		public uint max_results;
		public uint query_id;
		public Query (uint query_id, string query, Synapse.QueryFlags flags = QueryFlags.LOCAL_CONTENT, uint num_results = 96);
		public void check_cancellable () throws Synapse.SearchError;
		public static Gee.List<Gee.Map.Entry<GLib.Regex,int>> get_matchers_for_query (string query, Synapse.MatcherFlags match_flags = 0, GLib.RegexCompileFlags flags = GLib.RegexCompileFlags.OPTIMIZE);
		public bool is_cancelled ();
	}
	[CCode (cheader_filename = "synapse-core.h")]
	[Flags]
	public enum DesktopEnvironmentType {
		GNOME,
		KDE,
		LXDE,
		MATE,
		RAZOR,
		ROX,
		TDE,
		UNITY,
		XFCE,
		EDE,
		CINNAMON,
		PANTHEON,
		OLD,
		ALL;
		public static Synapse.DesktopEnvironmentType from_strings (string[] environments);
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public enum MatchScore {
		INCREMENT_MINOR,
		INCREMENT_SMALL,
		INCREMENT_MEDIUM,
		INCREMENT_LARGE,
		URI_PENALTY,
		POOR,
		BELOW_AVERAGE,
		AVERAGE,
		ABOVE_AVERAGE,
		GOOD,
		VERY_GOOD,
		EXCELLENT,
		HIGHEST
	}
	[CCode (cheader_filename = "synapse-core.h")]
	[Flags]
	public enum MatcherFlags {
		NO_REVERSED,
		NO_SUBSTRING,
		NO_PARTIAL,
		NO_FUZZY
	}
	[CCode (cheader_filename = "synapse-core.h")]
	[Flags]
	public enum QueryFlags {
		INCLUDE_REMOTE,
		UNCATEGORIZED,
		APPLICATIONS,
		ACTIONS,
		AUDIO,
		VIDEO,
		DOCUMENTS,
		IMAGES,
		FILES,
		PLACES,
		INTERNET,
		TEXT,
		CONTACTS,
		ALL,
		LOCAL_CONTENT
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public enum TextOrigin {
		UNKNOWN,
		CLIPBOARD
	}
	[CCode (cheader_filename = "synapse-core.h")]
	public errordomain SearchError {
		SEARCH_CANCELLED,
		UNKNOWN_ERROR
	}
	[CCode (cheader_filename = "synapse-core.h", has_target = false)]
	public delegate void PluginRegisterFunc ();
}
