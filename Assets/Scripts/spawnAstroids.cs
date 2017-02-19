/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class spawnAstroids : MonoBehaviour {

	//Level level;
	Transform itemPanel;
	Transform gameArea;
	Rect gameBounds;
	public float worldScreenHeight;
	public float worldScreenWidth;
	List<GameObject> silhouettes = new List<GameObject>();

	void Start () {
		level = LevelManager.getLevelByName (GameManager.level);
		itemPanel = GameObject.Find ("ItemPanelContent").transform;
		gameArea = GameObject.Find ("Background").transform;
		getWorldSize ();
		setBackground ();
		populateItems ();
	}

	void getWorldSize() {
		worldScreenHeight = Camera.main.orthographicSize *2f;
		worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;
	}

	void setBackground() {
		SpriteRenderer sr = gameArea.gameObject.GetComponent<SpriteRenderer> ();
		sr.sprite = Resources.Load<Sprite>(level.Background);
		float scaleX = worldScreenWidth / sr.sprite.bounds.size.x;
		float scaleY = worldScreenHeight / sr.sprite.bounds.size.y;
		gameArea.localScale = new Vector3(scaleX, scaleY, 1);
		gameBounds = getSpriteRect (gameArea.gameObject);
	}

	void populateItems() {
		for (int i = 0; i < level.Items.Count; i++) {
			GameObject item = createItem (level.Items [i]);
			item.transform.SetParent (itemPanel);

			GameObject sil = createSilhouette (level.Items [i]);
			sil.transform.SetParent (gameArea);
			silhouettes.Add (sil);
		}
	}

	GameObject createItem( item) {
		GameObject obj = Instantiate(Resources.Load ("PuzzlePiece") as GameObject, transform);
		Image spr = obj.GetComponent<Image>();
		obj.name = item.Name;
		spr.sprite = Resources.Load<Sprite> (item.Sprite);
		return obj;
	}

	GameObject createSilhouette(Asteroid item) {
		GameObject obj = Instantiate(Resources.Load ("Silhouette") as GameObject, transform);
		SpriteRenderer spr = obj.GetComponent<SpriteRenderer>();
		spr.sprite = Resources.Load<Sprite> (item.Sprite);
		obj.name = item.Name;
		float ppu = spr.sprite.pixelsPerUnit;
		float unitSize = 100 / ppu;
		float scaleX = unitSize / spr.sprite.bounds.size.x;
		float scaleY = unitSize / spr.sprite.bounds.size.y;
		obj.transform.localScale = new Vector3 (scaleX, scaleY, 1);
		do {
			randomPosition(obj);
		} while (isColliding(obj));
		return obj;
	}

	bool isColliding(GameObject obj) {
		Rect testRect = getSpriteRect (obj);
		foreach (GameObject obje in silhouettes) {
			Rect r = getSpriteRect (obje);
			if (r.Overlaps(testRect)) {
				return true;
			}
		};
		return false;
	}

	void randomPosition(GameObject obj) {
		obj.transform.position = new Vector3 (Random.Range (-5f, 5f), Random.Range (-2f, 2f), 0);
	}

	Rect getSpriteRect(GameObject obj) {
		Vector3 pos = obj.transform.position;
		SpriteRenderer sr = obj.GetComponent<SpriteRenderer> ();
		Rect tmpr = new Rect ();
		Vector3 min = pos + sr.bounds.min;
		Vector3 max = pos + sr.bounds.max;
		min.Scale (obj.transform.localScale);
		max.Scale (obj.transform.localScale);
		tmpr.min = new Vector2 (min.x, min.y);
		tmpr.max = new Vector2 (max.x, max.y);
		return tmpr;
	}

}
*/