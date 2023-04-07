/*This megascript is creating DB for DGUNH
  Arduino Labs website*/

DROP TABLE IF EXISTS cards;



CREATE TABLE cards(
    card_id int PRIMARY KEY NOT NULL,
    project_name TEXT NOT NULL,
    project_title TEXT NOT NULL,
    project_card BLOB
);

CREATE TABLE projects
(
    projects_pkey int PRIMARY KEY NOT NULL,
    card_index int FOREIGN KEY NOT NULL,
    proj_name TEXT FOREIGN KEY NOT NULL,
    proj_title TEXT FOREIGN KEY NOT NULL,
    authors TEXT NOT NULL,
    documentation TEXT,
    code BLOB,
    schem BLOB,
    photos BLOB,
    video BLOB,
    links TEXT
);